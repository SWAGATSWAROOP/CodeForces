#include<iostream>
using namespace std;

int main(){

    int n;
    cin>>n;
    while(n--){
        int x,y,z;
        cin>>x>>y>>z;
        if((x+y == z) || (y+z == x) || (x+z == y)){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}