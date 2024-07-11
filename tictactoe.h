#ifndef HEADERFILE
#define HEADERFILE

#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>


//PROTOTYPES

/*  
IN: size
OUT: print board
SUMMARY: prints board based on an integer  */
void drawBoard(int size);

/*
IN: nothing
OUT: prints, changes board string
SUMMARY: gets coordinate of player's move and changes board to reflect move*/
void gamePlay();

/*
IN: nothing
OUT: prints the winner of the game
SUMMARY: prints the board, calls banner function, prints winner, calls banner function, closes */
void printWinner();

/*
IN: nothing
OUT: calls printWinner function
SUMMARY: checks every row and column to see if the same player is in one of them */
void checkWinner();

/*
IN: nothing
OUT: prints
SUMMARY: prints a row of astericks */
void createBanner();

#endif