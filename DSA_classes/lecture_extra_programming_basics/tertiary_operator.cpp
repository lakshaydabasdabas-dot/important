#include <iostream>
using namespace std;

int main()
{
    int a=-10;

    if (a>0)
    {
        cout << "hello";
    }
    else{cout << "world";}

    //same way tertiary operator works
    //syntax: 
    //(condition) ? (if statement true ) : (if statement false);

    (a>0) ? (cout << "hello") : (cout << "world") ;
}