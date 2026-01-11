#include <iostream>
#include <vector>
#include <cstring>
using namespace std;

int main()
{
    char a[100];

    cin.getline(a,100,'\n');

    int j = strlen(a)-1;
    bool he = true;

    for (int i = 0; i < j ; ++i)
    {
        if (a[i]!=a[j])
        {
            cout << "not a palindrome";
            he = false;
            break;
        }

        j--;
    }

    if (he == true)
    {
        cout << "palindrome";
    }
}