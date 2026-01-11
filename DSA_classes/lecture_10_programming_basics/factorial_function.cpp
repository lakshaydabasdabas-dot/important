#include <iostream>
using namespace std;

int factorial(int no)
{   int product=1;
    for (; no > 1 ; no--)
    {
        product=product*no;
    }
    return product;
}
int main()
{   int no;
    cin >> no;

    int ans=factorial(no);
    cout << "ans: " << ans;
   
   return 0;   
}