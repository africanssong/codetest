#include <stdio.h>

int hammingWeight(int X)
{
    int cnt = 0;
    int t = X;

    while (t > 0)
    {
        if (t & 0x1)
            cnt++;
        t >>= 1;
    }
    return cnt;
}

int main()
{
    int X;
    scanf("%d", &X);
    int answer = hammingWeight(X);
    printf("%d\n", answer);

    return 0;
}