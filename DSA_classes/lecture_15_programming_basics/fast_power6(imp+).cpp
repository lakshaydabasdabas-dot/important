#include <iostream>
using namespace std;

//time complexity = 0(logN)
int fastpower(int x, int n)
{
    //kisi ki bhi power 0 times is 1
    if (n == 0)
    {
        return 1;
    }

    //recursive case
    // N odd : x*fastpower(x,n/2)*fastpower(x,n/2)
    // N even : fastpower(x,n/2)*fastpower(x,n/2);

    int chota = fastpower(x,n/2);
    if (n % 2 == 0)
    {
        return chota * chota;
    }
    else
    {
        return x*chota*chota; 
    }
}
int main()
{
    int n,x;
    cin >> x >> n;

    cout << fastpower(x,n);
}