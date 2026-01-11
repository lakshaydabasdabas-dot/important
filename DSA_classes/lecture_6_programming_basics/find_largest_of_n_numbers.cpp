#include <iostream>
#include <climits> // INT_MIN: -2^31, INT_MAX: 2^31-1
using namespace std;

int main(){
	float a= INT_MIN,b,i=1.0,n;
	cout << "enter the total number of numbers:";
	cin >> b;
	while (i<=b){
		cout << "enter the number:";
		cin >> n;
		if (n>a)
		{
			a=n;
		}
		i=i+1;	
	}
	cout << "the largest number is:" << a;

	return 0;
}