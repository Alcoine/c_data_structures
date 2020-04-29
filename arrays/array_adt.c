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

void display(struct Array array);

int main()
{
    struct Array array;

    printf("Enter size of the array: ");
    scanf("%d", &array.size);

    array.arr = (int *)malloc(array.size * sizeof(array.arr));
    array.length = 0;

    return 0;
}

void display(struct Array array)
{
    for (int i = 0; i < array.length; i += 1)
        printf("%d, ", array.arr[i]);
}