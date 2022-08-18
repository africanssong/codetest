#include<iostream>
using namespace std;

int main(int argc, char** argv){
    ios :: sync_with_stdio(0);
    cin.tie(0);
    int N,M;
    int prime[1000001] ={0,};
    int j=0;
    int cnt=0;
    prime[0]=1;
    prime[1]=1;
    for(int i=2;i<=1000000;i++)
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
    
    cin>>M>>N;

    for(int u=M;u<=N;u++)
    {
        if(prime[u]==0)
            cout<<u<<"\n";

    }
    
     
}