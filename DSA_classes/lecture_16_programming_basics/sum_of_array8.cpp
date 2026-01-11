#include <iostream>
using namespace std;

int sum(int *a,int n, int s)
{
    if (n == 0)
    {
        return s;
    }

    a[0] + sum(a+1,n-1,a[0]+s);

}

int main()
{
    int a[] = {1,2,3,4,5,6};
    int n = sizeof(a)/sizeof(int);
    int s = 0;

    cout << sum(a,n,0) << endl;

}