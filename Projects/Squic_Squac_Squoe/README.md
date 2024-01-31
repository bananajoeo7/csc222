# Squic_Squac_Squoe:
By: Trostin Geles
Description: Tic Tac Toe but uses red and black squares.
## Requirements:
1. Need to have SDL2 installed on your device.
2. Make sure you have Make installed on your device.
3. Must have a makefile with the correct path to your SDL2.
### Example:
```
all:
	g++ -I "path to your SDL include file" -L "path to your SDL include file" -o main main.cpp  -lSDL2main -lSDL2
```
### Tutorial:
This [tutorial](https://www.youtube.com/watch?v=9Ca-RVPwnBE) sets SDL2 up in Windows, but you should be able to follow along by downloading the correct file for your device. The Makefile is created at [11:50](https://youtu.be/9Ca-RVPwnBE?t=710).


## Notes:
1. The screen will start black and you will have to click a tile to start.
2. Player 1 is RED and PLayer 2 is Black.