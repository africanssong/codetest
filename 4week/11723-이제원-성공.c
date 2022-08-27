#include <stdio.h>
#include <string.h>

int main()
{
    unsigned int S = 0;

    int n, x;
    char in[10];
    scanf("%d", &n);

    for (int j = 0; j < n; j++)
    {
        scanf("%s %d", in, &x);

        if (!strcmp("add", in))
            S |= (1 << (x - 1));
        if (!strcmp("remove", in))
            S &= (~(1 << (x - 1)));
        if (!strcmp("check", in))
            printf("%d\n", (S >> (x - 1)) & 1);
        if (!strcmp("toggle", in))
            S ^= (1 << (x - 1));
        if (!strcmp("all", in))
            S |= 0xfffff;
        if (!strcmp("empty", in))
            S &= 0;
    }

    return 0;
}