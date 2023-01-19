#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    while(n--){
        int x,y;
        cin>>x>>y;
        int arr[x];
        int sum = 0;
        int mx = -1;
        for(int i=0;i<x;i++){
            cin>>arr[i];
            mx = max(arr[i],mx);
            sum += arr[i];
        }
        y = y + sum - (mx*(mx+1))/2;
        int i = mx+1;
        while(y > 0){
            y -= i;
            i++;
        }
        if(!y){
            cout<<"YES\n";
        }
        else{
            cout<<"NO\n";
        } 
    }
    return 0;
}