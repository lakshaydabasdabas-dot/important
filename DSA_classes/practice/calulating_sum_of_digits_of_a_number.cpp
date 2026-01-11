#include <iostream>
using namespace std;

int main(){
	int a,sum=0,b;

	cout << "type the number: ";
	cin >> a;

	while (a/10.0>0){
		b=a%10;
		sum=sum+b;
		a=a/10;
	}

	cout << "the sum of digits of the given number is:";
    cout << sum;


	return 0;

}