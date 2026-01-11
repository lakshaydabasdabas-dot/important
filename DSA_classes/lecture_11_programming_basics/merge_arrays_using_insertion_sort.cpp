#include <iostream>
using namespace std;

int main ()
{
    int a[] = {5,4,6,0,0,0};
    int b[] = {3,1,2};

    for (int i = 0; i < 3; ++i)
    {
        a[3+i] = b[i];
    }
    int n = sizeof(a)/sizeof(int),j;


    for (int i = 0; i < n; ++i)
    {
        int hpc = a[i];
        for (j = i-1; j >=0 and hpc<a[j]; --j)
         {
            
                a[j+1] = a[j];
            
         }
         swap(hpc,a[j+1]); 
    }

    for (int i = 0; i < n; ++i)
    {
        cout << a[i];
    }
}