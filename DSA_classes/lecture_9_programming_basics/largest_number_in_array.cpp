#include <iostream>
#include <climits>
using namespace std;


int main(){
	int a[]={1,2,3,4,5,6};
	int n = sizeof(a)/sizeof(int),i=0,b=INT_MIN;

	while(i<n)
	{
		if (a[i]>=b)
		{
			b=a[i];
		
		}
	i+=1;

	}
	cout << b << endl;
	 
	return 0;
}