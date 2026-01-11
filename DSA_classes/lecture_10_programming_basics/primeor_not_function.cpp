#include <iostream>
using namespace std;

int isprime(int n) {
    for (int i = 2; i < n; ++i)
    {
        if (n%i==0)
        {
            return false;
        }
    }

    return true;
}

int main()
{
    int n;

    cin >> n;

    if (isprime(n)==true)
    {
        cout << "prime\n";
    }
    else{
        cout << "notprime\n";
    }
    
    return 0;
} 
