#include <iostream>
#include <stdio.h>

int main()
{
    int X;
    std::cin >> X ;

    int i;
    int cnt = 0;
    for(i = 0; i < 7; i++)
    {
        if( ((X>>i) & 0x01) == 1)
        {
           cnt++;
        }
    }
    std::cout<< cnt << std::endl;

    return 0;
}