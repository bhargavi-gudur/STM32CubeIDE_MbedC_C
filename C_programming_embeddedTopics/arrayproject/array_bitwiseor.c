/**
 * @file array_bitwiseor.c
 * @author Gandla bhargavi
 * @brief This program performs a bitwise OR operation on all elements of an array.
 * @version 0.1
 * @date 2025-06-03
 *
 * @copyright Copyright (c) 2025
 *
 */
#include <stdio.h>
#include <stdint.h>

/**
 * @brief  This function performs a bitwise OR operation
 *  on all elements of an array.
 * @param arr
 * @param size
 * @return int
 */
int array_bitwise_Or(int *arr, int size)
{
    if (arr == NULL || size <= 0)
    {
        return -1; // Error: Invalid input
    }
    uint16_t result = arr[0];
    for (int i = 1; i < size; i++)
    {
        result |= arr[i];
        printf("%d|", result);
    }
    return result;
}
/**
 * @brief  Main function to demonstrate the bitwise OR operation on an array.
 *
 * @return int
 */
int main()
{
    int arr[] = {12, 15, 7, 19, 10};
    int size = sizeof(arr) / sizeof(arr[0]);
    int result = array_bitwise_Or(arr, size);
    if (result != -1)
    {
        printf("\nBitwise AND of the array elements is: %d\n", result);
    }
    else
    {
        printf("Error: Invalid input\n");
    }

    return 0;
}
