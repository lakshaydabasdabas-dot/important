#include <iostream>
using namespace std;


int main(){
	int a[9]={1,2,3,4,4,3,2,1,6};
	int n=9;

	int b=0;
	for (int i = 0; i<n ; ++i)
	{
		b=b^a[i];
	}
	cout << b;
	return 0;
}