/*
 * bitwiseClearBit.c
 *
 *  Created on: May 30, 2025
 *      Author: gandl
 */


#include<stdio.h>
#include"bitwiseoperator.h"

void bitwiseClearBit()
{
	int number = 5; // Example: Binary 0101
	int bitPosition = 2; // Setting bit at position 1

	number &= (1 << bitPosition);
	printf("bitwiseClearBit: %d\n", number);
}
