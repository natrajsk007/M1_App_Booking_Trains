/**
 * @file functions.c
 * @author Natarajan K
 * @brief Functions
 * @version 0.1
 * @date 2021-11-23
 * 
 * @copyright Copyright (c) 2021
 * 
 */

typedef struct NODE
{
	int booking_no;
	int age;
	char name[25];
	struct NODE *next;
} node;