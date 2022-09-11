#include<iostream>
using namespace std;

int main(int argc, char** argv){
    ios :: sync_with_stdio(0);
    cin.tie(0);

    int sum[12] ={0,};
    int T;
    cin>>T;
    sum[0]=1;
    sum[1]=1;
    sum[2]=2;
    for(int i=3;i<=10;i++)
    {
        sum[i]=sum[i-1]+sum[i-2]+sum[i-3];           
    }
    

    int n;
    for(int u=0;u<T;u++)
    {
        cin>>n;
        cout<<sum[n]<<"\n";

    }
    
     
}
