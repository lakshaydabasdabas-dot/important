#include <iostream>
using namespace std;

int factorial(int n)
{
    if (n == 0)
    {
        return 1;
    }

    //factorial(n) = n*factorial(n-1);
    int chotiproblem = factorial(n-1);
    int badiproblem = n*chotiproblem;
    // or we can also use return n*factorial(n-1);
}

int main()
{
    int n;
    cin >> n;

    cout << factorial(n) << endl;


    return 0;
}