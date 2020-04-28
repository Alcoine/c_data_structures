#include <stdlib.h>
#include <stdio.h>

int * create_2d_array();

int main()
{
    int *p, *q, i, *f;
    p = (int *)malloc(5 * sizeof(*p));
    q = (int *)malloc(5 * sizeof(*q));

    for (i = 0; i < 5; i += 1)
        p[i] = i * 100;

    for (i = 0; i < 5; i += 1)
        q[i] = p[i];

    free(p);

    p = q;
    q = NULL;
    f = create_2d_array(f);
    f[0] = 1090;
    printf("f pointer non-free: %d \n", f[0]);

    free(f);

    printf("f pointer free: %d \n", f[0]);
    printf("p pointer: %d \n", p[2]);

    return 0;
}

int * create_2d_array()
{
    int *p;
    p = (int *)malloc(10 * sizeof(*p));

    return p;
}