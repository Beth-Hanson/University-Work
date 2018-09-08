/* Programmer: Beth Hanson
Class: CptS 121, Summer 2018
Programming Assignment: Project
File: craps.h
Date: 06/20/18
Description: Game of Chance */

#ifndef CRAPS_H
//Disables scanf_s error
#pragma warning(disable: 4996)
#define CRAPS_H

//libraries
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>

//Prototypes
void print_game_rules(void);
double get_bank_balance(void);
double get_wager_amount(void);
int check_wager_amount(double, double);
int roll_die(void);
int calculate_sum_dice(int, int);
int is_win_loss_or_point(int);
int is_point_loss_or_neither(int, int);
double adjust_bank_balance(double, double, int);
void chatter_messages(int, int, double, double);
#endif