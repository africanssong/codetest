#include<iostream>
using namespace std;

int main(int argc, char** argv){
    ios :: sync_with_stdio(0);
    cin.tie(0);
    
    int N, K, count[201][201]={{0,},}; // count[i][j]는 i=N을 j=K개의 합으로 나타내는 경우
    
    cin>>N;
    cin>>K;
    
    for(int j=1;j<=K;j++)
        count[1][j]=j;   //  1을 j개의 합으로 나타내는 경우는 j  0...01 >> 10....0
    for(int i=1;i<=N;i++)
        count[i][1]=1;      // i을 1개의 합으로 나타내는 경우는 1가지 
    
    for(int i=2;i<=N;i++)
    {
        for(int j=2;j<=K;j++)
        {
            for(int x=0;x<=j;x++)
                count[i][j]=(count[i][j]+count[i-1][x])%1000000000; // 답은 1000000000으로 나눈값.
        }
    }
    cout<<count[N][K];
    
    
}
