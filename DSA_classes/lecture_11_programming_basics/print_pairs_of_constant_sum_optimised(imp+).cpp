#include <iostream>
using namespace std;

void printpairs(int a[],int n,int X)
{
    int freq[10000] = {0};
    for (int i = 0; i < n; ++i)
    {
        freq[a[i]]++;
    }
   
    for (int i = 0; i < n; ++i)
    {
        int no1 = a[i];
        int no2 = X - a[i];
        if (freq[no1]>0 and freq[no2]>0)
        {
            freq[no1]--;
            if (freq[no1]==0)
            {
                break;
            }
            freq[no2]--;
            cout << no1 << " " << no2 << "\n";
        }
    }
}

int main()
{
    int a[] = {3,4,2,1,6,3,2,8,5,6,8,4};
    int n = sizeof(a)/sizeof(int);

    int x;
    cin >> x;

    printpairs(a,n,x);
}