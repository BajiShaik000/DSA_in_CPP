#include<iostream>
using namespace std;

int main(){
    // int i = 1;
    // i = i++ + ++i;
    // cout<<i<<endl;
    // return 0;
    // int i=1;
    // int j=2;
    // int k;

    // k = i + j + i++ + j++ + ++i + ++j;
    // cout<<i<<" "<<j<<" "<<k<<endl;
    // return 0;
    
    // int i=0;

    // i = i++ - --i + ++i - i--;

    // cout << i << endl;

    // return 0;

    // int i=1, j=2, k=3;

    // int m = i-- - j-- - k--;

    // cout<<i<<endl;
    // cout<<j<<endl;
    // cout<<k<<endl;
    // cout<<m<<endl;

    int i =10,j=20,k;
        //10  //9  //19  //20  //9   //20  //10   //19
    k = i-- - i++ + --j - ++j + --i - j-- + ++i - j++;

    cout<<i<<endl;//10
    cout<<j<<endl;//20
    cout<<k<<endl;//-20

    return 0;

    // leftshift a<<n -> a * 2^n;
    //rightshift a>>n -> a / 2^n;
    
}