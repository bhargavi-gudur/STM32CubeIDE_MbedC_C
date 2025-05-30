/*
 *  bitwiseSetBit.c
 *
 *  Created on: May 30, 2025
 *  Author: gandla bhargavi
 */

#include<stdio.h>
#include"bitwiseoperator.h"

void bitwiseSetBit()
{
	    int number = 5; // Example: Binary 0101
	    int bitPosition = 1; // Setting bit at position 1

	    number |= (1 << bitPosition);
	    printf("bitwiseSetBit: %d\n", number);
}
