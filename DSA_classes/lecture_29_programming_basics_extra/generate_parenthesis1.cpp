#include <iostream>
#include <stack>
#include <cstring>
using namespace std;

bool isbalanced(char *str)
{
    stack<char> s;
    for (int i = 0; i < strlen(str); ++i)
    {
        char ch = str[i];
        switch (ch)
        {
        case '(':
        case '{':
        case '[':
            s.push(ch);
            break;
        case ')':
            if (!s.empty() && s.top() == '(')
                s.pop();
            else
                return false;
            break;
        case ']':
            if (!s.empty() && s.top() == '[')
                s.pop();
            else
                return false;
            break;
        case '}':
            if (!s.empty() && s.top() == '{')
                s.pop();
            else
                return false;
            break;
        }
    }
    return s.empty();
}

void generateparenthesis(char *a, int i, int n)
{
    // base case
    if (i == 2 * n)
    {
        a[i] = '\0';
        if (isbalanced(a))
        {
            cout << a << endl;
        }
        return;
    }

    // recursive case
    a[i] = '(';
    generateparenthesis(a, i + 1, n);

    a[i] = ')';
    generateparenthesis(a, i + 1, n);
}

int main()
{
    char a[1000];
    int n = 2; // number of pairs of brackets
    generateparenthesis(a, 0, n);
    return 0;
}
