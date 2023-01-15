#include<iostream>
using namespace std;

int main(){

    int n;
    cin>>n;
    while(n--){
        long long int x,y;
        cin>>x>>y;
        long long int arr[x];
        for(int i=0;i<x;i++){
            cin>>arr[i];
        }
        for(int i=0;i<y;i++){
            long long int l,k,sum=0;
            cin>>l>>k;
            if(l){
                for(int i=0;i<x;i++){
                if(arr[i]%2!=0){
                    arr[i] += k;
                }
                sum += arr[i];
            }
            }
            else{
                for(int i=0;i<x;i++){
                if(arr[i]%2==0){
                    arr[i] += k;
                }
                sum += arr[i];
            }
            }
            cout<<sum<<endl;
        }
    }
    return 0;
}