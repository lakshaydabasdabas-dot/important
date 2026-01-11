#include <iostream>
using namespace std;

int main(){
	int i=1,j,no;

	cout << "type the number of rows: ";
	cin >> no;
	no=no+1;

	while(i<=no/2){
		j=1;

		while(j<=no-i){
			cout << " ";
			j+=1;
		}
		while(j>no-i and j<no+i){
			cout << "*";
			j+=1;
		}	
		i=i+1;
		cout << "\n";
	}

	while(i>no/2 and i<=no){
		j=1;

		while(j<= no-(no-i)){
			cout << " ";
			j+=1;
		}
		while(j>no-(no-i) and j<no+(no-i)){
			cout << "*";
			j+=1;
		}	


		i=i+1;
		cout << '\n';}
	
	
	
	return 0;

}