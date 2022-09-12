#include <iostream>


// 참고 : https://bbeomgeun.tistory.com/87
int main()
{
    int X;
    std::cin>>X;
    int cnt;
    int arr[10*10*10*10*10*10 + 1];
    for(int i = 1 ; i <= X; i++)
    {
        arr[i] = i;
    }    

    for(int i = 2; i <=  X; i++)
    {
        if(i%2 == 0)
        {
            arr[i] = std::min(arr[i],arr[i/2]);
        }
        if(i%3 == 0)
        {
            arr[i] = std::min(arr[i],arr[i/3]);
        }
        arr[i] = (std::min(arr[i],arr[i-1]))+1;
    }

    std::cout<<arr[X]-1<<std::endl;
    while (X != 0)
    {
        if( (X%3 == 0) && ((arr[X/3]+1) == arr[X]) )
        {
            std::cout<<X<<" ";
            X = X/3;
        }
        else if ((X%2 == 0) && ((arr[X/2]+1) == arr[X]) )
        {
            std::cout<<X<<" ";
            X = X/2;
        }
        else{
            std::cout<<X<<" ";
            X = X-1;
        }
    }
    
    return 0;
}