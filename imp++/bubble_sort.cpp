#include <iostream>
using namespace std;

void bubblesort1(int *a, int n)
{
	if (n == 0)
	{
		return;
	}

	for (int i = 0; i < n; ++i)
	{
		if (a[i+1] < a[i])
		{
			swap(a[i],a[i+1]);
		}
	}

	bubblesort1(a,n-1);
}

void bubblesort2(int *a, int n, int i)
{
	if (i == n-1)
	{
		return;
	}

	for (int j = 0; j < n; ++j)
	{
		if (a[j+1] < a[j])
		{
			swap(a[j],a[j+1]);
		}
	}

	bubblesort2(a,n,i+1);
}

void bubblesort3(int *a, int n, int i, int j)
{
	if (i == n-1)
	{
		return;
	}

	if (j < n-1) //this function will be called till the time j is less than n-1
	{
		if (a[j+1]<a[j])
		{
			swap(a[j+1],a[j]);
		}
		bubblesort3(a,n,i,j+1);//after every turn of j,j is +1 in the next turn
	}
	else
	{
		bubblesort3(a,n,i+1,0);//after j reaches n-1, i is increased by one and j is restored back to 0
	}
}

int main()
{
	int a[] = {3,2,5,1,6,4};
	int n = sizeof(a)/sizeof(int);

	bubblesort1(a,n);

	for (int i = 0; i < n; ++i)
	{
		cout << a[i] << " ";
	}

	cout << endl;

	bubblesort2(a,n,0);

	for (int i = 0; i < n; ++i)
	{
		cout << a[i] << " ";
	}

	cout << endl;

	bubblesort3(a,n,0,0);

	for (int i = 0; i < n; ++i)
	{
		cout << a[i] << " ";
	}
}