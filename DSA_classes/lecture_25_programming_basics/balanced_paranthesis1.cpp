#include <iostream>
#include <stack>
using namespace std;

bool isbalanced(string &str)
{
    stack<char> s;
    for (int i = 0; i < str.size() ; ++i)
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
            if (!s.empty() and s.top() == '(')
            {
                s.pop();
            }
            else return false;
            break;
        case ']':
            if (!s.empty() and s.top() == '[')
            {
                s.pop();
            }
            else return false;
            break;
        case '}':
            if (!s.empty() and s.top() == '{')
            {
                s.pop();
            }
            else return false;
            break;
        }
    }
    if (s.empty())
    {
        return true; // sabhi bracket sahi se open se open hokar close ho gye
    }
    else{
        return false;// koi brackets close nhi ho paye
    }
}

int main()
{
    string s = "{a + [ b + ( c + d ) ] + ( e + f ) }";

    if (isbalanced(s))
    {
        cout << "balance hai\n";
    }
    else
    {
        cout << "balance nhi hai\n";
    }
}