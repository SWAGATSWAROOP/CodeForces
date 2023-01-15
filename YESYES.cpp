#include<iostream>
using namespace std;
 
int main(){
    int n;
    cin>>n;
    while(n--){
        char arr[51];
        cin>>arr;
        bool m = true;
        int i = 1;
        char prev = arr[0];
        if(prev != 's' && prev != 'Y' && prev != 'e'){
            cout<<"NO"<<endl;
            continue;
        } 
        while(arr[i] != '\0'){
            if((arr[i] == 's' && prev == 'e') || (arr[i] == 'Y' && prev == 's') || (arr[i] == 'e' && prev == 'Y')){
                prev = arr[i];
                i++;
                continue;
            }
            else{
                cout<<"NO"<<endl;
                m = false;
                break;
            }
        }
        if(m){
            cout<<"YES"<<endl;
        }
    }
    return 0;
}