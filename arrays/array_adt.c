/*
    Array ADT
*/

#include <stdlib.h>
#include <stdio.h>

struct Array
{
    int *arr;
    int size;
    int length;
};

int main()
{
    struct Array array;

    printf("Enter size of the array: ");
    scanf("%d", &array.size);

    array.arr = (int *)malloc(array.size * sizeof(array.arr));
    array.length = 0;

    return 0;
}