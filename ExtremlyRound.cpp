#include<iostream>
#include<cmath>
using namespace std;

int main(){

    int n;
    cin>>n;
    while(n--){
        int l;
        cin>>l;
        int count = 0;
        int k = 1;
        while(k<=l){
            count++;
            int i = pow(10,(int)log10(k));
            k += i;
        }
        cout<<count<<endl;
    }
    return 0;
}