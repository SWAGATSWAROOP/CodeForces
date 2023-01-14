#include<iostream>
using namespace std;

int main(){

    int n;
    cin>>n;
    while(n--){
        int a;
        cin>>a;
        char arr[a+1];
        cin>>arr;
        bool m = true;
        int j = 1;
        while(j<=a-1){
            if(j+1 > a-1 || arr[j] != arr[j+1]){
                cout<<"NO"<<endl;
                m = false;
                break;
            }
            j+=3;
        }
        if(m){
            cout<<"YES"<<endl;
        }    
    }
    return 0;
}