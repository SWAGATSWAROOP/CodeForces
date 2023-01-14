#include<iostream>
using namespace std;


int main(){

    int x;
    cin>>x;
    while(x--){
        int arr[2][2];
        cin>>arr[0][0]>>arr[0][1];
        cin>>arr[1][0]>>arr[1][1];
        bool m = false;
        for(int i=0;i<4;i++){
            if(arr[0][0] < arr[1][0] && arr[0][0] < arr[0][1] && arr[1][0] < arr[1][1] && arr[0][1] < arr[1][1]){
                m = true;
                break;
            }
            int temp = arr[0][1];
            arr[0][1] = arr[0][0];
            arr[0][0] = arr[1][0];
            int temp2 = arr[1][1];
            arr[1][1] = temp;
            arr[1][0] = temp2;
        }
        if(m){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}