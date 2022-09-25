#include<iostream>
#include<algorithm>
using namespace std;

int main(int argc, char** argv){
    ios :: sync_with_stdio(0);
    cin.tie(0);

    int N;
    cin>>N;
    
    int wine[10001];
    int sum[10001];
    
    for(int i=1;i<=N;i++){
        cin>>wine[i];
    }
    
    sum[0]=0;
    wine[0]=0;
    sum[1]=wine[1];
    sum[2]=wine[1]+wine[2];
    
    for(int i=3;i<=N;i++){
        sum[i]=max(sum[i-1],max(sum[i-3]+wine[i-1]+wine[i],sum[i-2]+wine[i]));
        
    }
    
 
    cout<<sum[N]<<"\n";
  
     
}
