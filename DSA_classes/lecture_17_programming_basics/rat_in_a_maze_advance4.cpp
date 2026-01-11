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

        cout << endl;
        sol[i][j] = 0; //bactracking
        return false;
    }

    //recursive case
    sol[i][j] = 1;//assume karlo i,j wala answer hai

    // 1. right se dekhte hai pehle, agr right se raasta mil gaya toh done...
    if (j+1 < m and maze[i][j+1] != 'X' and sol[i][j+1] != 1)
    {
        bool kyamila = ratinmaze(maze,i,j+1,sol,n,m);
        if (kyamila == true)
        {
            return true;
        }
    }

    // 2. down se dekhte hai then if agr right se raasta nhi mila gaya toh, if mila toh done...
    if (i+1 < n and maze[i+1][j] != 'X' and sol[i+1][j] != 1)
    {
        bool kyamila = ratinmaze(maze,i+1,j,sol,n,m);
        if (kyamila == true)
        {
            return true;
        }
    }

    // 3. left se dekhte hai pehle agr left se mil gya toh done..
    if (j-1 >= 0 and maze[i][j-1] != 'X' and sol[i][j-1] != 1)
    {
        bool kyamila = ratinmaze(maze,i,j-1,sol,n,m);
        if (kyamila == true)
        {
            return true;
        }
    }

    // 4. 
    if (i-1 >= 0 and maze[i-1][j] != 'X' and sol[i-1][j] != 1)
    {
        bool kyamila = ratinmaze(maze,i-1,j,sol,n,m);
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
        "OOOXO",
        "OXOXO",
        "OXXXO",
        "OOOXO"
    };

    int sol[10][10] = {0};

    if(!ratinmaze(a,0,0,sol,4,5))
        {
            cout << "path not found";
        }
}