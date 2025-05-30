/*
 *  bitwiseSetBit.c
 *
 *  Created on: May 30, 2025
 *  Author: gandla Bhargavi
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
