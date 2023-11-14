#include <stdio.h>
#include "search_algos.h"

/**
 * exponential_search - Searches for a value in a sorted array using exponential search
 * @array: Pointer to the first element of the array to search in
 * @size: Number of elements in the array
 * @value: Value to search for
 *
 * Return: Index where the value is located, or -1 if not found
 */
int exponential_search(int *array, size_t size, int value)
{
    size_t bound = 1;

    if (array == NULL || size == 0)
        return -1;

    while (bound < size && array[bound] < value)
    {
        printf("Value checked array[%lu] = [%d]\n", bound, array[bound]);
        bound *= 2;
    }

    printf("Value found between indexes [%lu] and [%lu]\n", bound / 2, (bound < size) ? bound : size);

    return binary_search(array, bound / 2, (bound < size) ? bound : size, value);
}

/**
 * binary_search - Searches for a value in a sorted array using binary search
 * @array: Pointer to the first element of the array to search in
 * @size: Number of elements in the array
 * @value: Value to search for
 *
 * Return: Index where the value is located, or -1 if not found
 */
int binary_search(int *array, size_t size, int value)
{
    size_t start = 0, end = size - 1, mid, i;

    while (start <= end)
    {
        printf("Searching in array: ");
        for (i = start; i <= end; i++)
        {
            printf("%d", array[i]);
            if (i < end)
                printf(", ");
            else
                printf("\n");
        }

        mid = (start + end) / 2;

        if (array[mid] == value)
            return mid;

        if (array[mid] < value)
            start = mid + 1;
        else
            end = mid - 1;
    }

    return -1; // Not found
}
