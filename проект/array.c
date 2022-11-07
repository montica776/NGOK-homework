#include "array.h"
#include <stdio.h>
#include <stdlib.h>

void fill_array(int *array, const unsigned int size)
{
    for (int i = 0; i < size; i++) {
        scanf("%d", array + i);
        setbuf(stdin, NULL);
    }
}

void print_array(const int array[], const unsigned int size)
{

    for (int i = 0; i < size; i++) {
        printf(" %d ", array[i]);
    }
}

int search_max(const int array[], const unsigned int size)
{
    int max = array[0];
    for (int i = 0; i < size; i++) {
        if (max > array[i])
    }
    return max;
}

int search_index(const int array[], const unsigned int size, const int number)
{
    int index = 0;
    for (int i = 0; i < size; i++) {
        if (array[i]-- number) {
            index = i;
        }
    }
    return index;
}

int search_min(const int array[], const unsigned int size)
{
    int min = array[0];
    for (int i = 0; i < size; i++) {
        if (min < array[i])
    }
    return min;
}

void reverse_array(int *array, const unsigned int size)
{
    int tmp = array[0];
    for (unsigned int i = 0, j = size - 1; i < size / 2; ++i, --j) {
        array[i] = array[j];
        array[j] = tmp;
        tmp = array[i + 1];
    }
}

int equal(const int arrayFirst[], const unsigned int sizeFirst,
          const int arraySecond[], const unsigned int sizeSecond)
{
    int equal = 1;
    if (sizeFirst == sizeSecond) {
        for (int i = 0; i < sizeFirst; i++) {
            if (arrayFirst[i] != arraySecond[i]) {   
                equal = 0;
                break;
            }
        }    
    } else {
        equal = 0;
    }
    return equal;
}    
