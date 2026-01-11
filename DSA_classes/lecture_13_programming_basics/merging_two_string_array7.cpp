#include<iostream>
#include<cstring>
using namespace std;

int main()
{
	char a[100];
	char b[100];

	cin.getline(a,100);
	cin.getline(b,100);

	int e = strlen(a);
	int f = strlen(b);

	int j = 0;

	for (int i = e ; i <= e+f ; ++i )
	{
		
		a[i] = b[j];
		j+=1;
	}
	cout << a;
}