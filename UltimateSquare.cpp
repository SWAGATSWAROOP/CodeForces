#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;

int main(){

    int n;
    cin>>n;
    while(n--){
        long long x;
        cin>>x;
        cout<<fixed<<setprecision(0)<<ceil(x/2.0)<<"\n";
    }
    return 0;
}