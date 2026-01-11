#include <iostream>
#include <climits>
using namespace std;

int main()
{
    char ch = 't';
    char *chp = &ch;
      
    
    cout << chp << endl;// it gives char* which prints a string so it will print all the characters
                        // in the memory till a null character arrives
    cout << (int*)chp << endl;

    return 0;
}
