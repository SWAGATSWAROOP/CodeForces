#include<iostream>
using namespace std;

int main(){

    int n,x,y;
    cin>>n;
    cin>>x;
    cin>>y;
    if(n == 1){
        if(x == y){
            cout<<"1"<<endl;
        }
        else{
            cout<<"0"<<endl;
        }
        cout<<x<<":"<<y<<endl;
        return 0;
    }
    if(x+y >= n){
        cout<<"0\n";
    }
    else{
        cout<<n-x-y<<endl;
    }
    for(int i=0;i<n;i++){
        if(i == n-2 && x){
            cout<<x<<":"<<0<<endl;
            x = 0;
        }
        else if(i == n-1 && y){
            cout<<0<<":"<<y<<endl;
            y = 0;
        }
        else if(x){
            cout<<1<<":"<<0<<endl;
            x--;
        }
        else if(y){
            cout<<0<<":"<<1<<endl;
            y--;
        }
        else{
            cout<<0<<":"<<0<<endl;
        }
    }
    return 0;
}
//Not done