#include <stdio.h>
#include <iostream>

#define true  1
#define False  0

int is_prime(int a){
    if (a == 1){
        return False;
    }
    for(int i = 2; i < a; i++ ){
        if (a%i ==0){
            return 0;
        }
    }
    return 1;
}

int main()
{
    int N ;
    int a[100] = {0,};
    int cnt = 0;
    std:: cin >> N;
    for(int i = 0; i < N; i++)
    {
        std::cin >> a[i];
        if(is_prime(a[i]))
        {
            cnt++;
        }
    }
    std:: cout << (cnt);
    return cnt;
}
