#include<iostream>
using namespace std;

int main(int argc, char** argv){
    ios :: sync_with_stdio(0);
    cin.tie(0);

    int sum[100001] ={0,};
    int tmp[100001]= {0,};
    int n;
    int tot;
    cin>>n;
    
    for(int i=0;i<n;i++)
        cin>>sum[i];
    
    tmp[0]=sum[0];
    tot = tmp[0];


    for(int i=1;i<n;i++)
    {        
        if (sum[i] > sum[i]+tmp[i-1])
        {
            tmp[i]=sum[i];
        }
        else{
            tmp[i]=tmp[i-1]+sum[i];
        }
        if(tot<tmp[i])
            tot=tmp[i];
    }

 
    cout<<tot;
  
     
}





