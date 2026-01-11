#include <iostream>
using namespace std;

int main()
{
    char ch;
    cin >> ch;

    switch (ch)
    {
    case 'N' :
    case 'n' :
        cout << "NORTH";
        break;
    case 'S' :
    case 's' :
        cout << "SOUTH";
        break;
    case 'W' :
    case 'w' :
        cout << "WEST";
        break;
    case 'E' :
    case 'e' :
        cout << "EAST";
        break;           

    }
   return 0;   
}