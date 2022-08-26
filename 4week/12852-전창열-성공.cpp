#include<iostream>
using namespace std;

int main(int argc, char** argv){
    ios :: sync_with_stdio(0);
    cin.tie(0);
    
    int N,X[1000002]={0,};  
    int sum[1000002]={0,};
    cin>>N;

    X[1]=0;
    X[2]=1;
    X[3]=1;
    int tmp;
    int cnt=0;
    sum[1]=1;
    sum[2]=1;
    sum[3]=1;
    cnt=4;

    for(int i=4;i<=1000000;i++)
    {
        tmp=1000000;
        
        if(i%3==0)     
        {
            tmp=X[i/3];
            sum[cnt]=i/3;
        }
        if(i%2==0)     
        {
            if(tmp>X[i/2]){
                tmp=X[i/2];
                sum[cnt]=i/2;
            } 
        }
        if(tmp>X[i-1]){
            tmp=X[i-1];
            sum[cnt]=i-1;
        } 

        X[i]=tmp+1;   
        cnt++;
    }

    cout<<X[N]<<"\n";

    while (N!=1){
        cout<<N<<" ";
        N=sum[N];
    }
    cout<<1<<"\n";
}
