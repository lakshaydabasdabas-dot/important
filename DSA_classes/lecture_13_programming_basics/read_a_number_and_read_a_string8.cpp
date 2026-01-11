#include <iostream>
using namespace std;

int main()
{
	int n;
	char a[100];

	cin >> n;
	cin.ignore(100,'@');
	cin.getline(a,100);

	cout << n << "*" << a << endl;	
}