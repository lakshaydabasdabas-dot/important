#include <iostream>
#include <stack>
using namespace std;

void push_bottom(stack<int> &s, int topElement)
{
    if (s.empty())
    {
        s.push(topElement);
        return;
    }
    //ek element main hata leta hu
    int top = s.top();
    s.pop();
    //ask recursion ki wo chote stack mia topElement ko last mai insert karke dede .. assumption

    push_bottom(s, topElement);

    //vapis jaate time jo element hamne hata diya
    s.push(top);
}

void reversestack(stack<int> &s)
{
    //base case
    if (s.empty())
    {
        return;
    }

    //recursive case
    int topElement = s.top();
    s.pop();
    reversestack(s);//remaining stack ko recursion reverse kardega .. assumption
    push_bottom(s, topElement);
}

void printstack(stack<int> s)
{
    while(!s.empty())
    {
        cout << s.top() << " ";
        s.pop();
    }
    cout << endl;
}
int main()
{
    stack <int> s;

    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    printstack(s);
    reversestack(s);
    printstack(s);
}