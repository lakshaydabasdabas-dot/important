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
int reverse(int n)
{
    int digit = digits(n);

    if (n == 0)
    {
        return 0;
    }

    int hello = n%10;

    return hello*pow(10,digit-1)+reverse(n/10); 
}
int main()
{
    int n;
    cin >> n;

    cout << reverse(n);
}