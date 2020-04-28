#include <stdlib.h>
#include <stdio.h>

int main()
{
    int *p;
    p = (int *)malloc(5 * sizeof(*p));

    for (int i = 0; i < 5; i += 1)
    {
        printf("%d \n", p[i]);
    }

    free(p);

    return 0;
}