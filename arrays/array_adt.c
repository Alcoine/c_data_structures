#include <stdlib.h>
#include <stdio.h>

struct Array
{
    int *arr;
    int size;
    int length;
};

void display(struct Array *array);
void insert(struct Array *array, int element, int atIdx);
void add(struct Array *array, int element);
void delete(struct Array *array, int atIdx);
void search(struct Array *array);
void get(struct Array *array);
void set(struct Array *array);
void max(struct Array *array);
void min(struct Array *array);
void reverse(struct Array *array);
void shift(struct Array *array);
void linear_search(struct Array *array);
void binary_search(struct Array *array);

int main()
{
    struct Array array;

    printf("Enter size of the array: ");
    scanf("%d", &array.size);

    array.arr = (int *)malloc(array.size * sizeof(array.arr));
    array.length = 0;
    insert(&array, 123, 0);
    insert(&array, 432, 0);
    insert(&array, 6666, 0);
    display(&array);
    delete(&array, 0);
    display(&array);

    return 0;
}

void display(struct Array *array)
{
    for (int i = 0; i < (*array).length; i += 1)
        printf("%d\n", (*array).arr[i]);
}

void insert(struct Array *array, int element, int atIdx)
{
    if (atIdx < 0 || atIdx > (*array).length)
        return;

    for (int i = (*array).length; i > atIdx; i -= 1)
        (*array).arr[i] = (*array).arr[i - 1];

    (*array).arr[atIdx] = element;
    (*array).length += 1;
}

void delete(struct Array *array, int atIdx)
{
    if (atIdx < 0 || atIdx > (*array).size)
        return;

    for (int i = atIdx; i < (*array).length; i += 1)
        (*array).arr[i] = (*array).arr[i + 1];

    (*array).length -= 1;
}

void add(struct Array *array, int element)
{
    if ((*array).length < (*array).size)
    {
        (*array).arr[(*array).length] = element;
        (*array).length += 1;
    }
}