#include <iostream>
using namespace std;

int main(){
	int a,i=1,j,no=1;
	cout << "type the number of rows to be printed:";
	
	cin >> a;
	while (i<a+1) {
		j=1;
		while (j<i+1) {
			cout << no << " ";
			j=j+1;
			no=no+1;	
		}
		cout << "\n";
		i=i+1;

		
	}
return 0;



}