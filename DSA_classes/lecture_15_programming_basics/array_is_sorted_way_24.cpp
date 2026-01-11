#include <iostream>
using namespace std;

bool issorted(int *a, int n , int i)
{
    if (i == n-1)
    {
        // agr ek hi element hai toh yeh condition true hoga that means array sorted hoga
        return true;
    }

    //recursive case
    //a[i]<= a[i+1]: ek index ko mai check kar leta hu
    // issorted(a,n,i+1) : baaki ke remaining indexes ka kaam hum recursion se puch leta hu

    if (a[i] <= a[i+1] and issorted(a,n,i+1) == true)
    {
        return true;
    }
    return false;
}   

int main()
{
    int a[] = {1,2,3,4,5};
    int n = sizeof(a)/sizeof(int);
    int i = 0;

    cout << issorted(a,n,i);
    
    return 0;
}