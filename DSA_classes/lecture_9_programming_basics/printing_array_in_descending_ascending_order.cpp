#include <iostream>
using namespace std;


int main(){
	int a[]={6,8,1,2,2,8,0,1,3,5};
	int n = sizeof(a)/sizeof(int);

	for (int i = 0; i < n-1; ++i)
	{
		for (int j = 0; j < n-1; ++j)
	    {
			if (a[j]>a[j+1])
			{
				//swap
				int temp = a[j];
				a[j] = a[j+1];
				a[j+1] = temp;
			}
		}
	}
	for (int i = 0; i < n; ++i)
	{
		cout << a[i] << " ";
	}	
	return 0;
}