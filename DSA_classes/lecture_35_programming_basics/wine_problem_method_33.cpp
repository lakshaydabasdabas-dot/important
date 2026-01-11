#include <iostream>
#include <cstring>
using namespace std;

int solve(int* wine, int day, int l, int r)
{
    if (l > r) return 0;

    int op1 = wine[l]*day + solve(wine, day + 1, l + 1, r);
    int op2 = wine[r]*day + solve(wine, day + 1, l, r - 1);

    return max(op1, op2);
}

int topdown(int* wine, int day, int l, int r, int dp[][100])
{
    if (l > r) return 0;

    if (dp[l][r] != -1) return dp[l][r];

    int op1 = wine[l]*day + topdown(wine, day + 1, l + 1, r, dp);
    int op2 = wine[r]*day + topdown(wine, day + 1, l, r - 1, dp);

    return dp[l][r] = max(op1, op2);
}

int bottomup(int* price, int n)
{
    int dp[100][100] = {0};

    for (int i = n-1; i >= 0; --i)
    {
        for (int j = i; j < n; ++j)
        {
            int day = n - (j - i);
            int op1 = price[i] * day + (i+1 <= j ? dp[i+1][j] : 0);
            int op2 = price[j] * day + (i <= j-1 ? dp[i][j-1] : 0);

            dp[i][j] = max(op1, op2);
        }
    }

    return dp[0][n-1];
}

int main()
{
    int wine[] = {2, 3, 5, 1, 4};
    int n = sizeof(wine) / sizeof(int);

    int dp[100][100];
    memset(dp, -1, sizeof(dp));

    cout << "Using Normal Recursion solve(): "
         << solve(wine, 1, 0, n-1) << endl;

    cout << "Using topdown(): "
         << topdown(wine, 1, 0, n-1, dp) << endl;

    cout << "Using bottomup(): "
         << bottomup(wine, n) << endl;

    return 0;
}
