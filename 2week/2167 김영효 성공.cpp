#include <iostream>

int main()
{
    int N,M;
    std:: cin >> N >> M ;

    int data[N][M];
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            std::cin >> data[i][j];
        }
    }

    int times;
    std::cin >> times;
    int row_1, row_2;
    int col_1, col_2;

    for (int i = 0; i < times; i++)
    {
        int ret = 0;
        std::cin >> row_1 >> col_1;
        std::cin >> row_2 >> col_2;
        for(int j = row_1 - 1; j < row_2; j++)
        {
            for (int k = col_1-1; k < col_2; k++)
            {
                ret += data[j][k];
            }
        }
        std::cout<< ret<<std::endl;
    }
    
    

    return 0;
}