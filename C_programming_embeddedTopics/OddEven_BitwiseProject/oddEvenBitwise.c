/**
 * @file oddEvenBitwise.c
 * @author Gandla bhargavi
 * @brief  This program checks whether a number is odd or even using bitwise operations.
 * It reads an integer from the user, checks the least significant bit (LSB) to determine if the number is odd or even,
 * @version 0.1
 * @date 2025-06-03
 *
 * @copyright Copyright (c) 2025
 *
 */
#include <stdio.h>
#include <stdint.h>

/**
 * @brief This function checks whether a number is odd or even using bitwise operations.
 *
 */
void oddEven_bitwise()
{
	int num;
	// int odd_even = 0x01;

	scanf("%d", &num);
	// odd_even = (odd_even &  num);

	// Print the binary representation of the number
	for (int i = 31; i >= 0; i--)
	{
		printf("%d", (num >> i) & 1);
	}
	printf("\n");

	if ((num & 1) == 0)
	{
		printf("the number is even :%d  \n", num);
	}
	else
	{
		printf("the number is odd :%d \n", num);
	}
}
/**
 * @brief  Main function to execute the oddEven_bitwise function.
 *
 * @return int
 */
int main()
{
	printf("enter the value to find it is odd or even number : \n");
	fflush(stdout);
	oddEven_bitwise();
	return 0;
}
