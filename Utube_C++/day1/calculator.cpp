#include <iostream>
using namespace std;

int main()
{
    float a, b;
    char op;
    cout << "enter two numbers" << endl;
    cin >> a >> b;
    cout << "enter any operator(+,-,*,/)" << endl;
    cin >> op;
    switch (op)
    {
    case '+':
        cout << a + b << endl;
        break;
    case '-':
        cout << a - b << endl;
        break;
    case '*':
        cout << a * b << endl;
    case '/':
        cout << a / b << endl;
    default:
        cout << "enter correct operator" << endl;
        break;
    }
    return 0;
}