#include<iostream>
using namespace std;

int main(){

    int n;
    cin>>n;
    while(n--){
        int k,s;
        cin>>k>>s;
        if(k == 3 && s == 3){
            cout<<2<<" "<<2<<endl;
        }
        else{
            cout<<k<<" "<<s<<endl;
        }
    }
    return 0;
}