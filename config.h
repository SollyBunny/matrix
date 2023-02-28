
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
#define OPTBUFSIZE 1000

// Return random char to be used for matrix (n = rand())
inline static char randchar(unsigned int n) {
	return n % ('~' - '!') + '!';
}

// Set color to the color for the matrix line
#define R 255
#define G 200
#define B 255
static unsigned char color[3] = {R, G, B};
inline static void randcolor() {
	color[0] = R - (rand() % 50);
	color[1] = G - (rand() % 50);
	color[2] = B - (rand() % 50);
}
