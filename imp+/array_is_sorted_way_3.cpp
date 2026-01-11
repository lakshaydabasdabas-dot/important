#include <iostream>
using namespace std;

bool issorted(int *a, int n)
{
    //base case
    if (n == 0 or n==1)
    {
        return true;
    }

    if (a[n-1] >= a[n-2] and issorted(a,n-1)==true)
    {
        return true;
    }
    return false;
}

int main()
{
    int a[] = {1,2,3,4};
    int n = sizeof(a)/sizeof(int);

    cout << issorted(a,n);
    
    return 0;
}

