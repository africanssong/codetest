#include<iostream>
using namespace std;

int main(int argc, char** argv){
    ios :: sync_with_stdio(0);
    cin.tie(0);
   
    int M,idx;
    int sum[21]={0,};
    string str;

    cin>>M;

    for(int m=0;m<M;m++){
        cin>>str;
        if(str == "add") {
            cin >> idx;
            sum[idx]=1;
        }
        else if(str == "remove") {
            cin >> idx;
            sum[idx]= 0;
        }
        else if(str == "check") {
            cin >> idx;
            if(sum[idx]) 
                cout << "1\n";
            else 
                cout << "0\n";
        }
        else if(str == "toggle") {
            cin >> idx;
            sum[idx]^=1;
        }
        else if(str == "all") {
            for(int i = 1; i <= 20; i++) 
                sum[i] = 1;
        }
        else if(str == "empty") {
            for(int i = 1; i <= 20; i++) 
                sum[i] = 0;
        }

    }

    
}
