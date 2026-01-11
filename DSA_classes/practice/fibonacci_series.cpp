#include <iostream>
using namespace std;

int main(){

	int a=0,b=1,c=1,n;

	cout << "type the number: ";
	cin >> n;
	cout << a << " " << b << " ";

	while (c<=n){
		c=a+b;
		a=b;
		b=c;
		if(c<=n){
			cout << c << " ";
		}
		
	}

	return 0;
}