#include <iostream>
using namespace std;

bool safehai(int board[][10], int i, int j, int n)
{
    // check column above
    for (int k = 0; k < i; ++k)
    {
        if (board[k][j] == 1)
            return false;
    }

    int copy_i = i, copy_j = j;

    // check upper right diagonal
    while (i >= 0 && j < n)
    {
        if (board[i][j] == 1)
            return false;
        i--;
        j++;
    }

    // reset to original position
    i = copy_i;
    j = copy_j;

    // check upper left diagonal
    while (i >= 0 && j >= 0)
    {
        if (board[i][j] == 1)
            return false;
        i--;
        j--;
    }

    return true;
}

bool nqueen(int board[][10], int i, int n)
{
    // base case
    if (i == n)
    {
        // print the board
        for (int x = 0; x < n; ++x)
        {
            for (int y = 0; y < n; ++y)
                cout << board[x][y] << " ";
            cout << endl;
        }
        cout << endl;
        return true; // to stop after one solution
    }

    // try placing queen in each column
    for (int j = 0; j < n; ++j)
    {
        if (safehai(board, i, j, n))
        {
            board[i][j] = 1;

            bool kyabakiplacehui = nqueen(board, i + 1, n);
            if (kyabakiplacehui)
                return true;

            // backtrack
            board[i][j] = 0;
        }
    }

    return false;
}

int main()
{
    int n;
    cout << "Enter board size: ";
    cin >> n;

    int board[10][10] = {0};
    if (!nqueen(board, 0, n))
        cout << "No solution exists!" << endl;

    return 0;
}
