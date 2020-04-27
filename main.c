#include <stdio.h>
#include <stdlib.h>

struct Rectangle
{
    int length;
    int breadth;
};

int main()
{
    struct Rectangle *p;
    p = (struct Rectangle *)malloc(sizeof(struct Rectangle));

    p -> length = 20;
    (*p).breadth = 5;
}

// c    : p = (int *) malloc(5 * sizeof(int));
// c++  : p = new Arr[5];
// reference available only in c++ 
/*
    int a = 10;
    int &r = a; // it's a reference (an allias)
*/