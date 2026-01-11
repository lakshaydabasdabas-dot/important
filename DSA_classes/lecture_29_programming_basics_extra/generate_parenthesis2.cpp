#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Solution
{
public:
    vector<string> x; // to store all valid combinations

    void solve(string ans, int n, int op, int cl)
    {
        // base case
        if (op == n && cl == n)
        {
            x.push_back(ans); // store the valid answer
            return;
        }

        // recursive case
        // 1. add '(' if we still can
        if (op < n)
        {
            solve(ans + '(', n, op + 1, cl);
        }

        // 2. add ')' if there are more opens than closes
        if (cl < op)
        {
            solve(ans + ')', n, op, cl + 1);
        }
    }

    vector<string> generateParenthesis(int n)
    {
        solve("", n, 0, 0);
        return x;
    }
};

int main()
{
    Solution s;
    vector<string> ans = s.generateParenthesis(2);

    for (int i = 0; i < ans.size(); ++i)
    {
        cout << ans[i] << endl;
    }
}
