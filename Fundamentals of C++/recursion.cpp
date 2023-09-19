#include<iostream>
using namespace std;

int factorial(int n);

int main(){
    int n = 10;
    int total = factorial(n);
    cout << total << "\n";
    return 0;
}

int factorial(int n){
    if (n > 0){
        return n * factorial(n-1);
    }else{
        return 1;
    }
}