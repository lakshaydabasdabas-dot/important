#include <iostream>
#include <climits>
using namespace std;

int main()
{
    int a[]={3,-5,1,-2,4};
    int n=sizeof(a)/sizeof(int),ans=INT_MIN;

    for (int i = 0; i < n ; ++i)
    {
        for (int j = i; j < n ; ++j)
        {
            int sum=0;
            sum+=a[j];
            ans=max(ans,sum); //ans will take the value of maximum out of these two, first ans will take the largest value
                                //then it will compare it to the larger value which will come out of the sum.
        }
    }

    cout << ans;
    return 0;
}
