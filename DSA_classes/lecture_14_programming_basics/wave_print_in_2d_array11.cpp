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
    for (int d = 0; d < j; ++d)
    {
        if (d%2==0)
        {   
            for (int c = 0; c < i; ++c)
            {
                cout << a[c][d] << " ";
            }
        }
        if (d%2!=0)
        {
            for (int c = i-1; c >= 0 ; --c)
            {
                cout << a[c][d] << " ";
            }
        }    
    }   
    return 0;
}