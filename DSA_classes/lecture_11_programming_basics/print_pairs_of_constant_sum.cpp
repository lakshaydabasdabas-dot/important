#include <iostream>
using namespace std;

void printpairs(int a[],int n,int no)
{
    for (int i = 0; i < n; ++i)
    {
        for (int j = i; j < n; ++j)
        {
            if (a[i]+a[j] == no)
            {
                cout << a[i] << "," << a[j] << "\n";
            }
        }
    }
}

int main()
{
    int a[] = {1,2,4,6,8,9};
    int n = sizeof(a)/sizeof(int);

    int no;

    cout << "type the number: ";
    cin >> no;

    printpairs(a,n,no); 
}