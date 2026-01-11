#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    /*
    char a[100];
    a = "hello world"; // not defined
    strcpy(a,"helloworld");//yeh chalega
    */

    string s; // string class ka object hai 's'
    s = "hello world";//this is allowed

    //cin >> s;
    s += ",learning strings";

    cout << s << endl;

    for (int i = 0; i < s.size(); ++i)
    {
        cout << s[i] << " ";
    }
    cout << endl;

    string s1 = "pineapple";
    string s2 = "Zilly dragon";
    if (s1 > s2)
    {
        cout << s1 << " is greater than " << s2 << endl;
    }
    else
    {
        cout << s2 << " is greater than " << s1 << endl;
    }

    cout << endl;

    char x[100] = "pineapple";
    char y[100] = "Zilly dragon";
    if (strcmp(x,y) == 0)
    {
        cout << x << " is equal to " << y << endl;
    }
    else if (strcmp(x,y) > 0)
    {
        cout << x << " is greater than " << y << endl;
    }
    else
    {
        cout << x << " is less than " << y << endl;
    }
}