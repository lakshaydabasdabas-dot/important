#include <iostream>
using namespace std;

bool issorted(int *a, int n)
{
    //base case
    if (n == 0 or n==1)
    {
        return true;//array mai kuch bhi nhi hai toh array sorted hi hai
    }

    //recursive case
    // issorted(a+1,n-1) : yeh assumption hai ki chota array sorted hai ya nhi hai rec bataega
    // a[0] < a[1] : ek comparison ham khud kar rahe hai
    if (a[0] <= a[1] and issorted(a+1,n-1)==true)
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

