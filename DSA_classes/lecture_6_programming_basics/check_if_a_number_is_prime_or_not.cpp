#include <iostream>
using namespace std;

int main(){
	int i=2,a;
	cout << "write the number:" ;
	cin >> a ;
	while (i<a)
	{
	    if (a%i==0)
		 {
		 	cout << "the number is not prime.";
		 	return 0;
		 }
		 i=i+1;
	}
	cout << "the number is prime";
	return 0;
}