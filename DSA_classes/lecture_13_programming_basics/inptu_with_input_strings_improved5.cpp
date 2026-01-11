#include <iostream>
using namespace std;


void inputstring(char a[],int n, char delimiter = '\n')
{

	char ch;

	ch = cin.get();
	int i = 0;
	while(ch != delimiter and i<n-1)
	{
		a[i]=ch;
		i++;

		ch=cin.get();
	}
	a[i] = '\0';//declare that last character is a null character
}
int main()
{
	char a[100];
	inputstring(a,100,'@');
	cout << a << endl;
	return 0;
}