# matrix
Matrix terminal screen saver made in C  
(Also see [pipes](https://github.com/SollyBunny/pipes"))

## Config
Config can be found in `config.h`  
`OPTBOLD`: Are the characters bold  
`OPTTIME`: Time between frames  
`OPTGAP`: Gap between matrix lines  
`OPTCHANCE`: Chance for a line to spawn after `OPTGAP` frames  
`OPTSIZEMIN`: Smallest possible matrix line height  
`OPTSIZEMAX`: Biggest possible matrix line height  
`OPTBUFSIZE`: Circular buffer size for matrix lines  

## Compiling
Run `make`

## Installing
Run `make install`

## Usage
Run `matrix`

## Problems
At fast (small) `OPTTIME`s the way flushing of the terminal works causes characters to not be removed  
The circular buffer is a fixed sized instead of expanding  
