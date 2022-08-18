#include<iostream>
using namespace std;

int main(int argc, char** argv){
    ios :: sync_with_stdio(0);
    cin.tie(0);
    
    int X;
    int count=0;
    cin>>X;
    
    while (X!=0)
    {
        count+=(X&1);
        X=X>>1;    
    }
    cout<<X<<"\n";

    cout<<count<<"\n";
}