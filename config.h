
#include <stdlib.h>

// Are the characters bold
#define OPTBOLD
// Time between frames
#define OPTTIME 50000
// Gap between matrix lines
#define OPTGAP 25
// Chance for a line to spawn after OPTGAP frames
#define OPTCHANCE 7
// Smallest possible matrix line height
#define OPTSIZEMIN 5
// Biggest possible matrix line height
#define OPTSIZEMAX 25
// Circular buffer size for matrix lines
#define OPTBUFSIZE 500

// Return random char to be used for matrix
inline static char randchar() {
	return rand() % ('~' - '!') + '!';
}

// Set color to the color for the matrix line
#define DEFAULTR 50
#define DEFAULTG 200
#define DEFAULTB 50
#define V 50 // Variance
#define ENDENABLED // Ends are at the bottom of each line
#define ENDB -50 // Amount brighter the ends are
#define ENDV 10 // Variance

inline static int getvariance(int v) {
	return (rand() % v) - (v / 2);
}
inline static unsigned char clampedadd(unsigned char c, int v) {
	if (v > 0) {
		if (c > 254 - v) return 255;
	} else {
		if (c < 1 - v) return 0;
	}
	return c + v;
}
inline static void randcolor(unsigned char *colors, unsigned char r, unsigned char g, unsigned char b) {
	colors[0] = clampedadd(r, getvariance(V));
	colors[1] = clampedadd(g, getvariance(V));
	colors[2] = clampedadd(b, getvariance(V));
	#ifdef ENDENABLED
		colors[3] = clampedadd(colors[0], getvariance(ENDV) + ENDB);
		colors[4] = clampedadd(colors[1], getvariance(ENDV) + ENDB);
		colors[5] = clampedadd(colors[2], getvariance(ENDV) + ENDB);
	#endif
}
