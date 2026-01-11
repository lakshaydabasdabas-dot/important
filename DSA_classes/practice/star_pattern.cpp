#include <iostream>
using namespace std;

int main(){
	int i=1,j,n;

	cout << "type the number of rows: ";
	cin >> n;

	while(i<=n){
		j=1;
		while(j<=i){
			cout << "*" << " ";
			j=j+1;
		}
	i=i+1;
	cout << "\n";			
	}
	return 0;
}