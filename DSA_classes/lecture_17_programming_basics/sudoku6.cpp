#include <iostream>
using namespace std;

int sort(int *a,int n,int i)
{
    if (i == n-1)
    {
        return true;
    }

    if (a[i] <= a[i+1] and sort(a,n,i+1))
    {
        return true;
    }

    return false;
}

int main()
{
    int a[] = {1,2,3,4,6};
    int n = sizeof(a)/sizeof(int);
    int i = 0;

    if (sort(a,n,i) == true)
    {
        cout << "the array is sorted";
    }
    else
    {
        cout << "the array is not sorted";
    }

}