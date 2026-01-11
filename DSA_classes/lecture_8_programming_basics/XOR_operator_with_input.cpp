#include <iostream>
using namespace std;


int main(){
	int no,n,ans=0;

	cout << "type the number of number: ";
	cin >> n;

	for (int i = 1; i <= n; ++i)
	{
		cin >> no;
		ans ^=no;
	}
	cout << "the unique number is: " << ans;
    
	return 0;
}