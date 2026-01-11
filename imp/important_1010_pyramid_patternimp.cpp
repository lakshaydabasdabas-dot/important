#include <iostream>
using namespace std;

int main()
{
    int n,m = 1;

    cout << "type the number of rows : ";
    cin >> n;

    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j <= i; ++j)
        {
            if (i%2 == 0 and j%2 == 0)
            {
                cout << 1 << " ";
            }
            else if (i%2 != 0 and j%2 != 0)
            {
                cout << 1 << " ";
            }
            else
            {
                cout << 0 << " ";
            }
        }
        cout << endl;
    }
}