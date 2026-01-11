#include <iostream>
#include <climits>
using namespace std;

bool seven(int *a, int n)
{
    if (n == 0)
    {
        return false;
    }

    if (a[0] != 7 and seven(a+1,n-1)==false)
    {
        return false;
    }
    return true;
}

void position(int *a,int *indx,int n,int i)
{
    if (i == n)
    {
        return;
    }
    if (a[i] == 7)
    {
        indx[i]++;
    }

    position(a,indx,n,i+1);
}

int main()
{
    int a[] = {1,2,3,4,5,6,7,8,9,10,11,7,12,7,7,7};
    int n = sizeof(a)/sizeof(int);
    int indx[100] = {0};
    int mx = INT_MIN,mn = INT_MAX;

    if (seven(a,n))
    {
        cout << "YES,The number is there." << endl;

        position(a,indx,n,0);
        cout << "the positions where the number is pesent is ";

        for (int i = 0; i < 100; ++i)
        {
            if (indx[i] > 0)
            {
                cout << " : " << i;
                mx = max(mx,i);
                mn = min(mn,i);
            }
        }
        cout << endl;
        cout << "the maximum position where the number is pesent is : ";
        cout << mx << endl;
        cout << "the minimum position where the number is pesent is : " << mn;
        }
    else
    {
        cout << "NO,The number is not there." << endl;
    }

}