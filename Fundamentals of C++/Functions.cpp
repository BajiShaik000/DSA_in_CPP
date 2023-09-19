#include<iostream>
using namespace std;

void Swap(int &x, int &y){
    int z = x;
    x = y;
    y = z;
}

int main(){
    int a = 20;
    int b = 30;

    cout << "Before swap" << "\n";
    cout << a << "\t" << b << "\n";

    Swap(a,b);

    cout << "After swap" << "\n";
    cout << a << "\t" << b << "\n";

    return 0;
}