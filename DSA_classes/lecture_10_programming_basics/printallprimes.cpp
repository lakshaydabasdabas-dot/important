#include <iostream>
using namespace std;

bool isprime(int n) {
    for (int i = 2; i < n; ++i)
    {
        if (n%i==0)
        {
            return false;
        }
    }

    return true;
}

void printallprimes(int n)
{
    for (int i = 2; i <= n ; ++i)
    {
        if (isprime(i))
        {
            cout << i << " ";
        }
        
    }
}

int main()
{
    int n;

    cin >> n;

    printallprimes(n);
    
    return 0;
}

