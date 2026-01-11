#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    int a[100][100],number = 1;
    int r,c;

    cin >> r >> c;

    for (int i = 0; i < r; ++i)
    {
        for (int j = 0; j < c; ++j)
        {
            a[i][j] = number++;
        }
    }
    for (int i = 0; i < r; ++i)
    {
        for (int j = 0; j < c; ++j)
        {
            cout << a[i][j] << "_";
        }
        cout << endl;
    }
    for (int i = 0; i < r; ++i)
    {
        if (i % 2 == 0)
        {
            for (int j = 0; j < c; ++j)
            {
                cout << a[i][j] << "_";
            }
        }
        else
        {
            for (int j = c-1; j >= 0; --j)
            {
                cout << a[i][j] << "_";
            }
        }
    }
}
