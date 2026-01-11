#include <iostream>
using namespace std;

int main()
{
    int a[3][4],no,i,j;
    int number = 1;
    for (i = 0; i < 3; ++i)
    {
        for (j = 0; j < 4 ; ++j)
        {
            a[i][j] = number;
            number++;
        }
    }

    cout << "type the number: ";
    cin >> no;

    for (i = 0; i < 3 ; ++i)
    {
        for (j = 0; j < 4 ; ++j)
        {
            if (a[i][j]==no)
            {
                cout << "row: " << i << endl << "column: " << j;
                break;
            }
        }
    }
    
    return 0;
}