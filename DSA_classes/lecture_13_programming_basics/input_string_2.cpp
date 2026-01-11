#include <iostream>
using namespace std;

int main()
{
	char a[10];

	cin >> a;
	cout << a << endl;//cin would not allow you to take input if __ is there between words
	// for ex hello world would only give hello as output.

	for (int i = 0; a[i] != '\0' ; ++i)//print till you reach null in the array
	{
		cout << a[i] << "_";
	}
}