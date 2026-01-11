#include<iostream>
using namespace std;

int main()
{
	char a[100];
	cin.getline(a,100,'@'); //default delimiter = '\n' // till the time input is @(you can use any character in place of this)

	cout << a << endl;

	//we can print array using loop too
	for (int i = 0; a[i] != '\0' ; ++i)
	{
		cout << a[i] << "_";
	}
}