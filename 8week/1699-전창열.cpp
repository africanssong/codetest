#include<iostream>
using namespace std;

int main(int argc, char** argv){
    ios :: sync_with_stdio(0);
    cin.tie(0);

    int tmp[100001];
    int num;
    cin>>num;
    tmp[0]=0;
    for(int i=1;i<=num;i++){
        tmp[i]=i;
        for(int j=1;j*j<=i;j++){
            if(tmp[i]>tmp[i-j*j]+1){
                tmp[i]=tmp[i-j*j]+1;
            }
        }
        
    }
    
 
    cout<<tmp[num]<<"\n";
  
     
}
