#include<iostream>
using namespace std;

int main(int argc, char** argv){
    ios :: sync_with_stdio(0);
    cin.tie(0);
    int N,A[1001]={0,}; 
    cin>>N;
    
    for(int i=0;i<N;i++)
    {
        cin>>A[i];
    }
    
    int A_sum[1001];
    
    A_sum[0]=A[0];
    int tmp;
    for(int i=1;i<N;i++)
    {
        tmp=0;
        for(int j=0;j<i;j++)
        {
            if((A[j]<A[i])&&(tmp<A_sum[j]))
            {
                tmp=A_sum[j];
            }
        }
        A_sum[i]=tmp+A[i];
    }
    int answer=0;
    
    for(int i=0;i<N;i++)                    //가장 큰 sum 찾기
    {
        if(answer<A_sum[i])
            answer=A_sum[i];
    }

    
    cout<<answer<<"\n";

    
    
}
