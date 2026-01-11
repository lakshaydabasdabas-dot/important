#include <iostream>
#include <climits>
using namespace std;


int main()
{
    int a[]={3,-5,1,-2,4};
    int n=sizeof(a)/sizeof(int);

    for (int i = 0; i < n; ++i)
    {
        cout << *(a+i) << " ";
    }

    return 0;
}
