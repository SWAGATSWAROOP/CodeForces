#include<iostream>
using namespace std;

int main(){

    int n;
    cin>>n;
    while(n--){
        int x;
        cin>>x;
        char arr[x];
        for(int i=0;i<x;i++){
            cin>>arr[i];
        }
        char sum = arr[0];
        for(int i=1;i<x;i++){
            if(sum == '1' && arr[i]=='1'){
                cout<<"-";
                sum = '0';
            }
            else{
                cout<<"+";
                if(arr[i]=='1'){
                    sum = '1';
                }
            }
        }
        cout<<"\n";
    }
    return 0;
}