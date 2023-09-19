#include<iostream>
#include<fstream>
using namespace std;

int main(){
    //creats and opens the file
    ofstream MyFile("filename.txt");

    //Write to file
    MyFile << "Files can tricky but it is funny enough!";

    //Close the file
    MyFile.close();
}