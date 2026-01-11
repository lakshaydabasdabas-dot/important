#include <iostream>
#include <climits>
using namespace std;

void update(int *y)
{
    *y=*y+1;
}

int main()
{
    int a=10;
    int *x=&a;

    update(x);
    cout << a;

    return 0;
}
