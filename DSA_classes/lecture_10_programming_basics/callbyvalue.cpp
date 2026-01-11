#include <iostream>
using namespace std;

void update(int &x) //same bucket is used//
{  
    x=x+1; //we changed x but a will also change
}
int main()
{   
    int a=1; 
    
    cout << "before update: " << a << endl;

    update(a);

    cout << "after update: " << a << endl;//a has changed if we have not used & then a remains same
   
   return 0;   
}