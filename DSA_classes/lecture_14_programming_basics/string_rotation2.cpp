#include <iostream>
#include<cstring>
using namespace std;

void rotate(char *a,int k)
{
    int len = strlen(a);
    k%=len;

    int i = len -1;
    while(i>=0)
    {
        a[i+k] = a[i];
        i--;
    }

    i = 0;
    int j = len;
    while(i<k)
    {
        a[i] = a[j];
        i++;
        j++;
    }
    a[len] = '\0';

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