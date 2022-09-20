#include<iostream>
using namespace std;

int main(int argc, char** argv){
    ios :: sync_with_stdio(0);
    cin.tie(0);

    int sum[1001] ={0,};
    int T;
    cin>>T;
    sum[0]=1;
    sum[1]=3;

    for(int i=2;i<=1000;i++)
    {
        sum[i]=(1*sum[i-1]+2*sum[i-2])%10007;           
    }
    

  
    cout<<sum[T-1]<<"\n";
  
     
}

