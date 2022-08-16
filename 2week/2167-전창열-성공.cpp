#include<iostream>
using namespace std;

int main(int argc, char** argv){
    ios :: sync_with_stdio(0);
    cin.tie(0);
    int N,M,i,j,x,y,K;
    int sum[302][302];

    for(int m=0;m<302;m++){
        sum[m][0]=0;
        sum[0][m]=0;
    }

    int tmp;
    cin>>N>>M;

    for(int u=1;u<=N;u++)
    {
        for(int v=1;v<=M;v++)
        {
            cin>>tmp;
            sum[u][v]+=sum[u-1][v]+ sum[u][v-1]- sum[u-1][v-1]+tmp;
        }
    }
    cin>>K;

    for(int k=0;k<K;k++)
    {        
        cin>>i>>j>>x>>y;
        cout<<sum[x][y]-sum[x][j-1]-sum[i-1][y]+sum[i-1][j-1]<<"\n";
    }
    
}