#include "search_algos.h"

/**
 * interpolation_search - search a value in to ordered array with interpolation
 * @array: integer array
 * @size: number of elements in array
 * @value: the value to search
 * Return: the first index with value matched or -1 otherwise
*/

int interpolation_search(int *array, size_t size, int value) {
    if (array == NULL || size == 0) {
        return -1;
    }

    size_t low = 0;
    size_t high = size - 1;

    while (low <= high && value >= array[low] && value <= array[high]) {
        if (low == high) {
            if (array[low] == value) {
                printf("%d\n", array[low]);
                return low;
            }
            return -1;
        }

        size_t pos = low + (((double)(high - low) / (array[high] - array[low])) * (value - array[low]));

        printf("%d\n", array[pos]);

        if (array[pos] == value) {
            return pos;
        }

        if (array[pos] < value) {
            low = pos + 1;
        } else {
            high = pos - 1;
        }
    }

    return -1;
}
