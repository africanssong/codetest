#include <iostream>
#include <cmath>
#include <time.h>
#define YES 1
#define NO 0

int main()
{
    std::ios_base::sync_with_stdio(0);
	std::cin.tie(0);

    int start, end;
    std::cin >> start >> end;
    int data[end+1];
    std::fill_n(data,end+1,1);
    data[0] = 0;    
    data[1] = 0;    
    /* 인덱스가 합성수면 배열에 0 */
    int temp = sqrt(end);
    for (int i = 2; i <= temp; i++)
    {
        int k = floor(end/i);
        if(data[i] != 0)
        {
            for(int j = 2; j <= k; j++)
            {
                data[i*j] = 0;
            }
        }
    }

    // 출력
    for(int i = 0 ; i <= end; i++)
    {
        if(data[i] && i >= start)
        {
            std::cout << i << std::endl;
        }
    } 

    return 0;
}
