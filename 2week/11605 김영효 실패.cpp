#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <iostream>

#define min(a,b)    (a<b) ? (a) : (b)
#define max(a,b)    (a>b) ? (a) : (b)

int main()
{
    std::ios_base::sync_with_stdio(0);
	std::cin.tie(0);

    int N, M;
    std::cin >> N >> M;

    int data;
    int sum[100000];
    std:: cin >> sum[0];
    for (int i = 1; i < N; i++)
    {
        std::cin >>data;
        sum[i] = sum[i-1]+data;
    }
    int A,B;
    for (int i = 0; i < M; i++)
    {
        std::cin >> A >> B;

        int ret = 0;
        if((min(A,B)) == 0)
        {
            ret = sum[(max(A,B)) -1];
        }
        else{
        ret = sum[(max(A,B)) - 1] - sum[(min(A,B))-2];
        }
        std::cout << ret << std::endl;
    }
    return 0;
}