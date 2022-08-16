#include<iostream>
using namespace std;

int main(int argc, char** argv){
    ios :: sync_with_stdio(0);
    cin.tie(0);
    int N,M,i,j;
    int sum[100002];
    int tmp;
    cin>>N>>M;
    sum[0]=0;
    for(int u=1;u<=N;u++)
    {
            cin>>tmp;
            sum[u]=sum[u-1]+tmp;
    }
    for(int k=0;k<M;k++)
    {        
        cin>>i>>j;
        cout<<sum[j]-sum[i-1]<<"\n";
    }
    
}