#include<iostream>
using namespace std;

int main(){
    int a,b;
    cin>>a>>b;
    for(;a<=b; a++){
        int i;
        for(i=2;i<a;i++){
            if (a%i == 0){
                break;
            }
        }
        if (i == a){
            cout << a << endl;
        }
    }
    return 0;
}