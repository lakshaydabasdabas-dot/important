#include <iostream>
using namespace std;

int add(int x,int y) {
    int ans = x + y;

    return ans;
}

int main()
{
    int a=5,b=10;

    int sum = add(a,b);//a,b has stored values 
    int pum = add(20,30);//a,b has no stored values

    cout << "sum: " << sum << "  pum : " << " " << pum <<  endl;
    
    return 0;
} 
