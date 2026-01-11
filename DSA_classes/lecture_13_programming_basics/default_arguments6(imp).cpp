#include <iostream>
using namespace std;

int add(int x = 0 ,int y = 0 ,int z = 0 )
{
	return x+y+z;
}

int main()
{
	cout << add(10,20,30) << endl;
	cout << add(10,20) << endl;
	cout << add(10) << endl;
	cout << add() << endl;
}