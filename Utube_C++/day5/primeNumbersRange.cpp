#include <iostream>
#include <math.h>
using namespace std;

bool isPrime(int num)
{
    for (int i = 2; i < sqrt(num); i++)
    {
        if (num % i == 0)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    int a, b;
    cin >> a >> b;
    if (a < b)
    {
        for (int i = a; i <= b; i++)
        {
            if (isPrime(i))
            {
                cout << i << endl;
            }
        }
    }
    else{
        cout<<"value of a should be less than b"<<endl;
    }

    return 0;
}