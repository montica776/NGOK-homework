#include "array.h"
#include <stdio.h>

int main(void)
{
    int array[5] = {0};
    fill_array(array, 5);

    print_array(array, 5);
}