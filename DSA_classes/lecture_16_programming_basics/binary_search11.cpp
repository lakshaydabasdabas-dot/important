#include <iostream>
using namespace std;

int binarysearch(int *a,int n, int key, int s, int e)
{
    int m = (s+e)/2;

    if (a[m] == key)
    {
        return m;
    }
    if (s > e)
    {
        return -1;
    }

    if (a[m] > key)
    {
        binarysearch(a,n,key,s,m-1);
    }
    else if (a[m] < key)
    {
        binarysearch(a,n,key,m+1,e);
    }
}

int main()
{
    int a[] = {3,5,4,6,1,7,8};
    int n = sizeof(a)/sizeof(int);
    int s = 0,e = n-1;
    int key;
    cin >> key;

    if(binarysearch(a,n,key,s,e)>=0)
    {
        cout << "Key found!\n" << "key : " << key << endl << "at address : " << binarysearch(a,n,key,s,e); 
    }
    else
    {
        cout << "key not found.";
    }
        

}