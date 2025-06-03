/**
 * @file bitwiseClearBit.case
 * @author Gandla bhargavi
 * @brief  This program demonstrates how to clear a specific bit in an integer using bitwise operations.
 * @version 0.1
 * @date 2025-06-03
 *
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
