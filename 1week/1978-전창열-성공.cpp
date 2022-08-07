#include<iostream>
using namespace std;

int main(int argc, char** argv){
    ios :: sync_with_stdio(0);
    cin.tie(0);
    int N;
    int prime[1001] ={0,};
    int j=0;
    int cnt=0;
    prime[0]=1;
    prime[1]=1;
    for(int i=2;i<=1000;i++)
    {
        j=i;
        if((prime[j]==0)&&(j<1000))
        {
            while((j+i)<=1000){
                j=j+i;
                prime[j]=1;
            }
    
        }
    
    }
    
    int sum[101];
    cin>>N;

    for(int u=0;u<N;u++)
    {
        cin>>sum[u];
        if(prime[sum[u]]==0)
            cnt=cnt+1;
    }
    
    cout<<cnt<<"\n";
     
}
