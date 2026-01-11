#include <iostream>
#include <climits>
using namespace std;

int bottomup(int amount, int *deno , int n)
{
    int dp[10000];
    dp[0] = 0;                         // base case

    for (int i = 1; i <= amount; ++i)  // start from 1 to protect dp[0]
    {
        int ans = INT_MAX;             // assume impossible initially

        for (int k = 0; k < n; ++k)
        {
            if (i >= deno[k] && dp[i - deno[k]] != INT_MAX)
            {
                ans = min(ans, dp[i - deno[k]] + 1);
            }
        }

        dp[i] = ans;                   // store result for i
    }

    return dp[amount];                 // <-- added return
}

int main()
{
    int deno[] = {2, 7, 10};
    int n = sizeof(deno) / sizeof(int);
    int amount = 35;

    cout << bottomup(amount, deno, n) << endl;
}
