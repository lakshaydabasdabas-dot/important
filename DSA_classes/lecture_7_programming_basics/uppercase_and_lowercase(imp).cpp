#include <iostream>
using namespace std;

int main(){
	char ch;
	cin >> ch;

	cout << 'a'-1 << ' ' << 'Z'-1 <<  endl;

	if (ch >= 'A' and ch <= 'Z')
	{
		cout << "uppercase";
	}
	
	else if (ch >= 'a' and ch <= 'z')
	{
		cout << "lowercase";
	}
	else (cout << "the character is not a alphabet.");
	
	return 0;

}