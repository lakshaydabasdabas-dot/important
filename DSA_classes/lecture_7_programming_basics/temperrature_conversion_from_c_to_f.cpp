#include <iostream>
using namespace std;

int main(){
	string a;
	float b,c;

	cout << "Which unit are you converting from: ";
	cin >> a;

	if (a=="celsius" || a=="Celsius" || a=="" || a=="CELSIUS")
	{
		cout << "type the temperature in celsius: ";
		cin >> b;
		cout << "\n" << "the temperature in farenheit is: ";
		cout << (9/5)*b+32;
	}
	else if (a=="farenheit" || a=="f" || a=="Farenheit" || a=="FARENHEIT")
	{
		cout << "type the temperature in farenheit: ";
		cin >> c;
		cout << "\n" << "the temperature in celsius is: ";
		cout << ((c-32)*(5/9.00));
	}
	return 0;
}
