#include<iostream>
using namespace std;

int main(){

    int n;
    cin>>n;
    while(n--){
        int i,j,k;
        cin>>i>>j>>k;
        int sum = i+j+k;
        int mx = max(i,max(j,k));
        int mn = min(i,min(j,k));
        cout<<sum - mx - mn<<endl;
    }
    return 0;
}