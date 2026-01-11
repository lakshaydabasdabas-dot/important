#include <iostream>
#include<cstring>
using namespace std;

void reverse(char *a, int i , int j)
{
    while(i < j)
    {
        swap(a[i],a[j]);
        i++;
        j--;
    }
}

void rotate(char *a,int k)
{
    int len = strlen(a);
    k%=len;
    reverse(a,0,len-1);
    reverse(a,0,k-1);
    reverse(a,k,len-1);
}

int main()
{
    char a[] = "coding";
    int k;
    cin >> k;
    rotate(a,k);
    cout << a << endl;
    return 0;
}