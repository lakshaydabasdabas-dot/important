#include <iostream>
using namespace std;

int main()
{
    char b[] = {'b','d','k','*','#','\0','A',4};
    int n = sizeof(b)/sizeof(char);

    char ch = 'Z';
    cout << &ch << '\n';// the system sees & of a char as a string starts print the string till 
                        // a null character arrives in the memory and the memory contains the 
                        // the previous character array so it prints the array till null arrives
                        //but it does not work for int becuse (character) array has char* which is 
                        // a string so it prints the string.
    //end 1

    int a[] = {101,'d','k','*','#','A',4};
    int u = sizeof(a)/sizeof(char);

    char cu = 'Z';
    cout << &cu << endl; // the system sees & of a char as a string starts print the string till 
                         // a null character arrives in the memory and the memory contains the 
                         // the previous integer array so it prints only one element of (integer) array
                         // because int * only allows one integer
    //end 2

    int c[] = {'b','d','k','*','#','\0','A',4};
    int x = sizeof(c)/sizeof(char);

    int cx = 'Z';
    cout << &cx;
}