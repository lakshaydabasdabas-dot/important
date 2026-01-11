#include <iostream>
using namespace std;

int main()
{
    int a=-10;

    if (a>0)
    {
        cout << "hello\n";
    }
    else{cout << "world\n";}

    //same way tertiary operator works
    //syntax: 
    //(condition) ? (if statement true ) : (if statement false);

    (a>0) ? (cout << "hello\n") : (cout << "world\n") ;

    //we can also assign values using tertiary operator;
    bool ans;
    int b=10;
    ans = (b%2==0) ? (true) : (false);
    if (ans)
    {
        cout << "even";
    }
    else{cout << "odd"; }
}