#include <stdio.h>
#include <stdbool.h>
#include <math.h>

int isComposite(int n)
{
    if (n == 2)
        return false;

    if (!(n & 0x1))
        return true;

    return false;
}

int isPrime(int n)
{
    int t = 3;
    int m = (int)sqrt(n);
    if (n == 3)
        return true;
    do
    {
        if (!(n % t))
            return false;
        t += 2;
    } while (t <= m);

    return true;
}

int main()
{
    int M, N;
    int cnt = 0;
    scanf("%d %d", &M, &N);
    for (int n = M; n <= N; n++)
    {
        if (n == 1)
            continue;

        if (isComposite(n))
            continue;

        if (isPrime(n))
            printf("%d\n", n);
    }
    return 0;
}