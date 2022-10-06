#include <iostream>

//https://yabmoons.tistory.com/87

int main()
{
    int arr[1001];
    int N ;
    std::cin >> N;
    for(int i = 0 ; i < N ; i++)
    {
        std::cin >> arr[i];
    }
    int MAX = 0;
    int sum[1001];
    for(int i = 0; i < N; i++)
    {
        sum[i] = arr[i];
        for(int j = 0; j < i; j++)
        {
            if(arr[j] < arr[i] && (sum[i] < sum[j] + arr[i]))
            {
                sum[i] = sum[j] + arr[i];
            }
        }    
        if(MAX < sum[i])
        {
            MAX = sum[i];
        }
    }
    std::cout << MAX;
    return 0;
}