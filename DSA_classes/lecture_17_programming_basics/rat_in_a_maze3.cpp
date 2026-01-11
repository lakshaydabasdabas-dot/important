#include <iostream>
using namespace std;

bool ratinmaze(char maze[][100], int i, int j, int sol[][10], int n,int m)
{
    // base case
    if (i == n - 1 and j == m - 1)//mil gaya solution
    {
        sol[i][j] = 1;// base case bhi toh sol ka part hoga hi...
        for (int i = 0; i < n; ++i)
        {
            for (int j = 0; j < m; ++j)
            {
                cout << sol[i][j] << " ";
            }
            cout << endl;
        }
        return true;
    }

    //recursive case
    sol[i][j] = 1;//assume karlo i,j wala answer hai

    // 1. right se dekhte hai pehle, agr right se raasta mil gaya toh done...
    if (j+1 < m and maze[i][j+1] != 'X')
    {
        bool kyamila = ratinmaze(maze,i,j+1,sol,n,m);
        if (kyamila == true)
        {
            return true;
        }
    }

    // 2. down se dekhte hai then if agr right se raasta nhi mila gaya toh, if mila toh done...
    if (i+1 < n and maze[i+1][j] != 'X')
    {
        bool kyamila = ratinmaze(maze,i+1,j,sol,n,m);
        if (kyamila == true)
        {
            return true;
        }
    }

    sol[i][j] = 0;// backtracking
    return false;
}

int main()
{
    char a[100][100] = 
    {
        "OOOX",
        "OXOX",
        "OXXX",
        "OOOO"
    };

    int sol[10][10] = {0};

    ratinmaze(a,0,0,sol,4,4);
}