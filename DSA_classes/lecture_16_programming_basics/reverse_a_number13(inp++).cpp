#include <iostream>
#include <cmath>
using namespace std;

int digits(int n)
{
    if (n == 0)
    {
        return 0;
    }

    return digits(n/10)+1;
}

int number(int n)
{
    if (n == 0)
    {
        return 0;
    }
    int digit = digits(n);
    int hello = n%10;
    return hello*pow(10,digit-1)+number(n/10);
}

int main()
{
    int n;
    cin >> n;

    cout << number(n);
}