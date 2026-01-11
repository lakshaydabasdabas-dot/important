#include <iostream>
using namespace std;

string keys[100] = 
{
    "zero","one","two","three","four","five","six","seven","eight","nine"
};

void inttostring(int n)
{
    //base case
    if (n == 0)
    {
        return;
    }
    //recursive case
    //ek last digit ka kaam ham karlete hai
    int ld = n%10;
    cout << keys[ld] << " ";

    inttostring(n/10);
}

int main()
{
    int n = 2048;

    inttostring(n);

}