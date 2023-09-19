#include<iostream>
#include<string>
std:: string cars[4] = {"Maruti","Suzuki","Tesla"};
int myNum[5] = {1,2,3,4,5};

int main(){
    std:: string name = "Baji";
    for(int i: myNum){
       std:: cout << i << "\t";
    }
    std:: cout << sizeof(myNum) / sizeof(int);
    return 0;
}

// using namespace std;
// int myNum = 15;
// const int minutesPerHour = 60;
// const float PI = 3.14;
// int x,y,sum;
// string name="shaik";
// string fullName;

// int main(){
//     // cout << "Hello World!" <<endl;
//     // cout << "my age is " << myNum << " years";
//     // /*cout << "I am learning C++";//This is single line comment
//     // cout << "Baji Shaik";*/
//     // return 0;
//     // cout << "Enter a number: ";
//     // cin >> x;
//     // cout << "Enter another number: ";
//     // cin >> y;
//     // sum = x + y;
//     // cout << "Your sum is " << sum <<endl;
//     // cout << "The length of string is " << name.size();
//     cout << "Enter your full name: ";
//     getline(cin, fullName);
//     cout << "your name is " << fullName;
// }