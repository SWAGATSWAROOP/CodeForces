#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    while(n--){
        char arr[4];
        cin>>arr;
        cout<<(int)arr[0] + (int)arr[2] - 96<<endl;
    }
    return 0;
}