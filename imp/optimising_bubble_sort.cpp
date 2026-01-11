#include <iostream>
using namespace std;

int main()
{
    int a[]={4,2,1,5,3};
    int n=sizeof(a)/sizeof(int);

    for (int i = 0; i < n-1; ++i)
    {
        bool swaphua = false;
        for (int j = 0; j < n-1-i ; ++j)
        {
            if (a[j] > a[j+1])
            {
                swaphua = true;
                swap(a[j],a[j+1]);
            }
        }
        // agar j ke loop ke bahar aakar dekha swapping nhi hui that means array is sorted//
        if (swaphua == false)
        {
            break; // i wale loop ko break kardo no point of running algo further
        }

   
    }
    
    for (int i = 0; i < n; ++i)
    {
        cout << a[i] << " ";
    }
    cout << endl; 

   return 0;   
}