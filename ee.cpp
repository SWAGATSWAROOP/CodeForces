#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    while(n--){
        int x,y;
        cin>>x>>y;
        long long int arr[x];
        for(int i=0;i<x;i++){
            cin>>arr[i];
        }
        for(int i=0;i<y;i++){
            int l;
            long long int k,sum=0;
            cin>>l>>k;
                for(int i=0;i<x;i++){
                if(l == 1 && arr[i]%2!=0){
                    arr[i] += k;
                }
                else if(l == 0 && arr[i]%2==0){
                    arr[i] += k;
                }
                sum += arr[i];
            }
            cout<<sum<<endl;
        }
    }
    return 0;
}