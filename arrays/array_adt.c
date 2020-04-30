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
void insert(struct Array array, int element);
void add(struct Array array);
void delete(struct Array array);
void search(struct Array array);
void get(struct Array array);
void set(struct Array array);
void max(struct Array array);
void min(struct Array array);
void reverse(struct Array array);
void shift(struct Array array);

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

void insert(struct Array array, int element)
{
    array.arr[array.length] = element;
    array.length += 1;
}

void add(struct Array array)
{

}