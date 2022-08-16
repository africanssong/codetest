#include <stdio.h>
#define n 300
#define k 10000

int main()
{
    int N, M, K;

    scanf("%d %d", &N, &M); // 행,열 입력

    int arr[n][n] = {
        0,
    };

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
            scanf("%d", &arr[i][j]);
    }

    scanf("%d", &K); // K 입력

    int v, w, x, y; // 배열 좌표
    for (int c = 0; c < K; c++)
    {
        int answer = 0;
        scanf("%d %d %d %d", &v, &w, &x, &y);

        for (int i = w; i <= y; i++)
            for (int j = v; j <= x; j++)
                answer += arr[j - 1][i - 1];

        printf("%d\n", answer);
    }
    return 0;
}
