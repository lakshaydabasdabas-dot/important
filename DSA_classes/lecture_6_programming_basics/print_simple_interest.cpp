#include <iostream>
using namespace std;

int main(){
	float a,b,c;
	
	cout << "enter principal amount:";
	cin >> a;

	cout << "enter the rate of interest:";
	cin >> b;

	cout << "enter time:";
	cin >> c;

	cout << "the simple interest is:" << " " << a*b*c/100;
	return 0;
}