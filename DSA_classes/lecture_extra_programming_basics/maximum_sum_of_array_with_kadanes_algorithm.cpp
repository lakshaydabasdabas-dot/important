#include <iostream>
#include <climits>
using namespace std;

int main()
{
    int a[]={3,5,1,-2,-4};
    int n=sizeof(a)/sizeof(int),ans=0,j;

    for (int i = 0; i < n ; ++i)
    {
            int sum = 0;
            sum+=a[i];
            if (sum<0)
            {
                sum=0;
            }
            ans=max(ans,sum); //ans will take the value of maximum out of these two, first ans will take the largest value
                                //then it will compare it to the larger value which will come out of the sum.
        
    }

    cout << ans;
    return 0;
}
