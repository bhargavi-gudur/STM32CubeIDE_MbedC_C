/**
 * @file bitwiseToggleBit.c
 * @author Gandla bhargavi
 * @brief  This program demonstrates how to toggle a specific bit in an integer using bitwise operations.
 * @version 0.1
 * @date 2025-06-03
 *
 * @copyright Copyright (c) 2025
 *
 */

#include<stdio.h>
#include"bitwiseoperator.h"

void bitwiseToggleBit()
{
	 int number = 5; // Example: Binary 0101
     int bitPosition = 1; // Setting bit at position 1

	 number ^= (1 << bitPosition);
	 printf("bitwiseToggleBit: %d\n", number);
}
