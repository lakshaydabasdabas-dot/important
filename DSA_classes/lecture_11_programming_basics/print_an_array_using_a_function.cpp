#include <iostream>
using namespace std;

void printarray(int a[],int n)
{
    for (int i = 0; i < n; ++i)
    {
        cout << a[i] << " ";
    }
}

int main()
{
    int a[]={1,2,3,4,5,6};
    int n = sizeof(a)/sizeof(int);

    printarray(a,n);
}