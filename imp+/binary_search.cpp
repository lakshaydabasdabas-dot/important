#include <iostream>
using namespace std;

int main()
{
    int a[] = {1,4,9,25,36};
    int n = sizeof(a)/sizeof(int);

    bool he = false;

    int key;
    cin >> key;

    int s = 0;
    int e = n;

    for (; s<=e ;)
    {
        int m = (s+e)/2+1;
        if (key < a[m])
        {
            e = m-1;
        }
        else if(key > a[m])
        {
            s = m+1;
        }
        else
        {
            //key == a[m];
            cout << "key found at:" << m;
            he = true;
            break;
        }
    }

    if (he == false)
    {
        cout << "key not found";
    }

}
