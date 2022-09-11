#include<iostream>
using namespace std;

int main(int argc, char** argv){
    ios :: sync_with_stdio(0);
    cin.tie(0);
    int N;
    int T[1500001]={0,};
    int P[1500001]={0,};
    cin>>N;
    
    for(int i=1;i<=N;i++)
    {
        cin>>T[i];
        cin>>P[i];
    }
    
    int sum[1500051]={0,};
    
    
    for(int i=1;i<=N;i++)
    {
        if(sum[i+T[i]]<sum[i]+P[i])
            sum[i+T[i]]=sum[i]+P[i];
        
        if(sum[i+1]<sum[i])
            sum[i+1]=sum[i];
       
    }
        
    cout<<sum[N+1]<<"\n";

    
    
}
