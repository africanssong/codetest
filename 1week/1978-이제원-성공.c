#include <stdio.h>

#define N 1000
#define YES 1
#define NO 0

int isPrime(int x)
{
    if (x == 1)
        return NO;

    for (int j = 2; j < x; j++)
        if ((x % j) == 0)
            return NO;
    return YES;
}

int main()
{
    int n = 0;
    int cnt = 0;
    int arr[N] = {
        0,
    };

    scanf("%d", &n);

    for (int j = 0; j < n; j++)
        scanf("%d", &arr[j]);

    for (int j = 0; j < n; j++)
    {
        if (isPrime(arr[j]) == YES)
            cnt++;
    }

    printf("%d\n", cnt);
    return 0;
}
