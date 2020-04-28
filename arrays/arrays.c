#include <stdlib.h>
#include <stdio.h>

int main()
{
    int *p, *q, i;
    p = (int *)malloc(5 * sizeof(*p));
    q = (int *)malloc(5 * sizeof(*q));

    for (i = 0; i < 5; i += 1)
        p[i] = i * 100;

    for (i = 0; i < 5; i += 1)
        q[i] = p[i];

    free(p);

    p = q;
    q = NULL;

    printf("%d \n", p[2]);

    return 0;
}