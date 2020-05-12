struct Dynamic_array
{
    int *arr;
    int size;
    int length;
};

int main()
{
    // TODO: figure out how to use packages in C
    // TODO: read about calloc and malloc
    // TODO: implement dynamic array based on provided size * 2
    // https://www.geeksforgeeks.org/dynamic-memory-allocation-in-c-using-malloc-calloc-free-and-realloc/
    // https://www.geeksforgeeks.org/stack-vs-heap-memory-allocation/
    // https://www.geeksforgeeks.org/memory-layout-of-c-program/
    return 0;
}

void add(struct Dynamic_array *array, int element)
{
    if ((*array).length < (*array).size)
    {
        (*array).arr[(*array).length] = element;
        (*array).length += 1;
    }
}