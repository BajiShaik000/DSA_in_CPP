#include<iostream>
using namespace std;

int main(){
    int age = 18;
    int &ref = age;
    int* ptr = &age;
    cout << &age << "\n";
    cout << *ptr << "\n";
    struct
    {
       int myNum;
       string myString;
    }myStructure;

    myStructure.myNum = 2;
    myStructure.myString = "Two";

    cout << myStructure.myNum << " " << myStructure.myString << "\n";

    return 0;
}