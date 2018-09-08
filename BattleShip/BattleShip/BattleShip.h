/* Programmer: Beth Hanson
Class: CptS 121, Summer 2018
Programming Assignment: Project 6
File: BattleShip.h
Date: 07/06/18
Description: To create the game Battle Ship.*/

#ifndef BATTLESHIP_H
//Disables scanf_s error
#pragma warning(disable: 4996)
#define BATTLESHIP_H

//libraries
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

//Prototypes

int displayMenu();
void get_direction(int *direction, char* name[], int count);
void v_or_h(int direction, int *row, int *colm);
void init_board(char board[10][10], int rows, int cols);
void display_board(char board[10][10], int rows, int cols);
void generate_direction(int * direction);
void generate_starting_point(int length, int direction, int * srow, int *scol);
void place_ship(char board[10][10], int row_start, int col_start, int dir, int length, char symbol);

#endif