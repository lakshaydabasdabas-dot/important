#include <iostream>
using namespace std;

int main()
{
	char a[100];

	char ch;
	cin.get(ch);

	int i = 0;
	while(ch != '@')
	{
		a[i]=ch;
		i++;

		cin.get(ch);
	}
	a[i] = '\0';//declare that last character is a null character

	cout << a;

	return 0;
}