#include <iostream>
#include <stack>
using namespace std;

int main()
{
    int a[] = {5,4,3,2,1,6,8,7};
    int n = sizeof(a)/sizeof(int);
    int ng[100];

    stack<int> s;

    for (int i = 0; i < n; ++i)
    {
        while(!s.empty() and a[s.top()] < a[i])
        {
            ng[s.top()] = i;
            s.pop();
        }

            s.push(i);

    }

    while(!s.empty())
    {
        ng[s.top()] = -1;
        s.pop();
    }

    for (int i = 0; i < n; ++i)
    {
        cout << ng[i] << " ";
    }
    cout << endl;
}