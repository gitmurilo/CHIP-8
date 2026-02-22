/*
author: github.com/gitmurilo
22/02/2026
*/

#ifndef _CHIP8HEADER_H_     
#define _CHIP8HEADER_H_     

#include <stdlib.h>     
#include <stdio.h>      
#include <stdint.h>     
#include <string.h>     
#include <time.h>       

#define true 1
#define false 0
#define bool int

#define MEMORY_SIZE 4096
#define GRAPHICS_ROWS 32
#define GRAPHICS_COLUMNS 64
#define GRAPHICS_SIZE (GRAPHICS_COLUMNS * GRAPHICS_ROWS)
#define STACK_SIZE 16
#define KEY_SIZE 16

#define GRAPHICS_INDEX (row, column) ((row)*GRAPHICS_COLUMNS+(column))

#define MAX_GAME_SIZE (0x1000 - 0x200) //Hexadecimal subtraction; in decimal, it reads as 4096-512 (due to the first 512 bytes of memory being reserved for the processor's interpreter).

void chip8_initialize(); 
void chip8_loadgame(char *game); //open file and load a game archives in ram
void chip8_emulatecycle(); //operator of emulation (take, read, execute).
void chip8_setkeys(); //set a keyboard
void chip8_timer(); //set a timer 

#endif
