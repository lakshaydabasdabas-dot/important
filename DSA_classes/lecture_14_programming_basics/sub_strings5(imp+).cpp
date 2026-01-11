#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char a[]={"abcd"};
    char ch;

    int n = strlen(a);

    for (int i = 0; a[i] != '\0' ; ++i)
    {
        for (int j = i; a[j] != '\0' ; ++j)
        {
            cout << a[j];
        }
        cout << endl;
    }
}