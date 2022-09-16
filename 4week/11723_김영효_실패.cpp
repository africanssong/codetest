#include <iostream>


int main()
{
    std::ios :: sync_with_stdio(0);
    std::cin.tie(0);

    int S[21] = {0};
    std::string operation;
    int M;
    int x;

    std::cin >> M;
    for(int i = 0 ;i < M; i++)
    {
        std::cin >> operation;
        if(operation == "add")  // S 에 x 추가 
        {
            std::cin >> x;
            S[x] = 1;
        }
        else if (operation == "remove")// S 에 x 제거
        {
            std::cin >> x;
            S[x] = 0;
        }
        else if (operation == "check")// S 에 x 있으면 1 출력 없으면 0출력
        {
            std::cin >> x;
            std::cout << S[x] << std::endl;
        }
        else if (operation == "toggle")// S 에 x있으면 제거 없으면 추가
        {
            std::cin >> x;
            S[x] ^= 1;
        }
        else if (operation == "all") 
        {
            std::fill_n(S,21,1);
        }
        else if (operation == "empty")
        {
            std::fill_n(S,21,0);
        }
    }
}