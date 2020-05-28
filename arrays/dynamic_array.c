struct Dynamic_Array
{
    int *arr;
    int size;
    int length;
};

int main()
{
    // TODO: check notes
    // TODO: figure out how to use packages in C
    // TODO: read about calloc and malloc
    // TODO: implement dynamic array based on provided size * 2
    // https://www.geeksforgeeks.org/dynamic-memory-allocation-in-c-using-malloc-calloc-free-and-realloc/
    // https://www.geeksforgeeks.org/stack-vs-heap-memory-allocation/
    // https://www.geeksforgeeks.org/memory-layout-of-c-program/
    return 0;
}

void add(struct Dynamic_Array *array, int element)
{
    if ((*array).length < (*array).size)
    {
        (*array).arr[(*array).length] = element;
        (*array).length += 1;
    }
}

void display(struct Dynamic_Array *array)
{
    for (int i = 0; i < (*array).length; i += 1)
        printf("%d\n", (*array).arr[i]);
}

void delete(struct Dynamic_Array *array, int at_idx)
{
    if (at_idx < 0 || at_idx > (*array).size)
        return;

    for (int i = at_idx; i < (*array).length; i += 1)
        (*array).arr[i] = (*array).arr[i + 1];

    (*array).length -= 1;
}