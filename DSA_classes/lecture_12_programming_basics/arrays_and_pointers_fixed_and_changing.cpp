#include <iostream>
#include <climits>
using namespace std;

int print(int *a, int n)
{
    int ans = 0;
    for (int i = 0; i < n; ++i)
    {
        ans+=a[i];
    }
    return ans; // now 0th bucket value is 1 not 3
}

int main()
{
    int a[]={3,-5,1,-2,4};
    int n=sizeof(a)/sizeof(int);

    print(a+2,n);//a+2 is the address of 0 th index bucket

    return 0;
}
