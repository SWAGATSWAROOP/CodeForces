#include<iostream>
using namespace std;

int main(){

    int n;
    cin>>n;
    while(n--){
        int i,j,k,l,m,o;
        cin>>i>>j>>k>>l>>m>>o;
        if((i == k || i == m) && (j == l || j == o)){
            cout<<"NO"<<endl;
        }
        else if((k == i || k == m) && (j == l || l == o)){
            cout<<"NO"<<endl;
        }
        else if((m == k || i == m) && (o == l || j == o)){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
        }
    }
    return 0;
}