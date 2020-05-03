#include <stdlib.h>
#include <stdio.h>

int ** create_2d_array();

int main()
{
    int *p, *q, i, **f;
    p = (int *)malloc(5 * sizeof(*p));
    q = (int *)malloc(5 * sizeof(*q));

    for (i = 0; i < 5; i += 1)
        p[i] = i * 100;

    for (i = 0; i < 5; i += 1)
        q[i] = p[i];

    free(p);

    p = q;
    q = NULL;
    f = create_2d_array();
    printf("f pointer non-free: %d \n", f[0][1]);

    free(f);

    printf("f pointer free: %d \n", f[0]);
    printf("p pointer: %d \n", p[2]);

    return 0;
}

int ** create_2d_array()
{
    int **p;

    p = (int **)malloc(3 * sizeof(*p));
    p[0] = (int *)malloc(10 * sizeof(*p));
    p[1] = (int *)malloc(10 * sizeof(*p));
    p[2] = (int *)malloc(10 * sizeof(*p));

    p[0][1] = 1337;

    return p;
}
