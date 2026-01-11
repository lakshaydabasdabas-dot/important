#include <iostream>
#include <cstring>
using namespace std;

int main()
{
	char a[100] = {0};

	cin.getline(a,100,'\n');
	bool he = true;

	int n = strlen(a);

	for (int i = 0; i < n; ++i)
	{
		if (a[i] != a[n - i - 1])
		{
			he = false;
			break;
		}
	}

	if (he == false)
	{
		cout << "not a palindrome";
	}
	else
	{
		cout << "palindrome";
	}
}