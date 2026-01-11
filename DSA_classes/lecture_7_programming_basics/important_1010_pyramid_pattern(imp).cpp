#include <iostream>
using namespace std;

int main(){
	int i=1,j,n,no;

	cout << "type the number of rows: ";
	cin >> n;

	while(i<=n){

		if (i%2==0)
		{
			cout << 0 << " ";
		}
		else (cout << 1 << " ");
		no=i%2;

		j=2;
		while(j<=i){
		cout << 1-no << " ";
		no=1-no;
		j=j+1;
		}
		
		i=i+1;
		cout << "\n";
	}
	return 0;
}
