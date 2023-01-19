#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    while(n--){
        long long x,y,sum=0,k,l;
        cin>>x>>y;
        long long arr[x];
        int e = 0;
        for(int i=0;i<x;i++){
            cin>>arr[i];
            if(arr[i]%2==0){
                e++;
            }
            sum += arr[i];
        }
        for(int i = 0;i<y;i++){
            cin>>k>>l;
            if(k){
                sum += (x-e)*l;
            }
            else{
                sum += e*l;
            }
            cout<<sum<<endl;
            if(k == 0 && l%2 != 0){
                e = 0;
            }
            else if(k == 1 && l%2 != 0){
                e = x;
            }
        }
    }
    return 0;
}
