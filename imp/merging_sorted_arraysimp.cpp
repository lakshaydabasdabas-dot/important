#include <iostream>
using namespace std;

int main ()
{
    int a[6] = {3,4,6};
    int b[] = {1,2,7};
    int m = 3;int n = 3;
    
    int i = n-1;
    int j = m-1;
    int k = 5;

    while(i>=0 and j>=0)
    {
        if (a[i]>b[j])
        {
            a[k] = a[i];
            i--;
            k--;
        }
        else
        {
            a[k] = b[j];
            j--;
            k--;
        }
    }
    while(j>=0)
    {
        a[k] = b[j];
        k--;
        j--;
    }

    for (int i = 0; i < 6; ++i)
    {
        cout << a[i];
    }
    
}