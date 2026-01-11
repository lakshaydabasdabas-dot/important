#include <iostream>
#include<cstring>
using namespace std;

void update(char *largest,char *a)
{
	int lena = strlen(a);
	for (int i = 0; i <= lena ; ++i)
	{
		largest[i]=a[i];
	}
}

int main()
{
	char a[100],largest[100];
	int n,llena = 0;
	cin >> n;

	cin.ignore();

	for (int i = 0; i < n; ++i)
	{
		cin.getline(a,100);
		int lena = strlen(a);
		if (lena > llena)
		{
			llena = lena;
			update(largest,a);
		}
	}
	cout << largest << endl;
}