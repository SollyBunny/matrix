# matrix
Matrix terminal screen saver made in C  
(Also see [pipes](https://github.com/SollyBunny/pipes))

## Config
Config can be found in `config.h`  
`OPTBOLD`: Whether the characters bold  
`OPTTIME`: Time between frames  in us
`OPTGAP`: Gap between matrix lines  
`OPTCHANCE`: Chance for a line to spawn after `OPTGAP` frames  
`OPTSIZEMIN`: Smallest possible matrix line height  
`OPTSIZEMAX`: Biggest possible matrix line height  
`OPTBUFSIZE`: Circular buffer size for matrix lines  
`OPTPRESIM`: Number of iterations to presimulate  
You can also set the color using the `THEME_COLOR` environment variable

## Compiling
Run `make`

## Installing
Run `make install` to install  
Run `make uninstall` to uninstall

## Usage
Run `matrix`

## TODO
* At fast (small) `OPTTIME`s the way flushing of the terminal works causes characters to not be removed  
* The circular buffer is a fixed sized instead of expanding  
