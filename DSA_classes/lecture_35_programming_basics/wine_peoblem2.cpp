#include <iostream>
#include <cstring> // for memset
using namespace std;

int solve(int* wine, int day, int l, int r)
{
    if (l >r)
    {
        return 0;
    }
    
    int op1 = wine[l]*day + solve(wine, day + 1,l + 1,r);
    int op2 = wine[r]*day + solve(wine, day + 1,l,r - 1);

    return max(op1,op2);
}

int topdown(int* wine, int day, int l, int r, int dp[][100])
{
    if (l > r)
    {
        return 0;
    }

    if (dp[l][r] != -1)
    {
        return dp[l][r];
    }

    int op1 = wine[l]*day + topdown(wine, day + 1,l + 1,r,dp);
    int op2 = wine[r]*day + topdown(wine, day + 1,l,r - 1,dp);

    return dp[l][r] = max(op1,op2);
}

int main()
{
    int wine[] = {2, 3, 5, 1, 4};
    int n = sizeof(wine) / sizeof(int);

    // DP table
    int dp[100][100];
    memset(dp, -1, sizeof(dp));

    // Results
    cout << "Using Normal Recursion solve(): " 
         << solve(wine, 1, 0, n-1) << endl;

    cout << "Using Memoized Recursion topdown(): "
         << topdown(wine, 1, 0, n-1, dp) << endl;

    // Print DP table
    cout << "\nDP Table:\n";
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            cout << dp[i][j] << "\t";
        }
        cout << endl;
    }
}