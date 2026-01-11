#include <iostream>
using namespace std;
    
int main()
{
    int a[]={3,6,2,1,4,5};
    int n=sizeof(a)/sizeof(int),j;

    for (int i = 0; i < n; ++i)
    {
        int hpc = a[i];
        for (j = i-1; j >=0 and hpc < a[j] ; --j)
        {
            a[j+1]=a[j];
        }
        a[j+1]=hpc;
    }

    for (int i = 0; i < n; ++i)
    {
        cout << a[i] << " ";
    }


    return 0;
}
