#include <iostream>
using namespace std;
#define a << endl;

int main(){
	int i,no,sum=0.0;

	cout << "type the number : ";
	cin >> no;

	while(no>0){
		i=no%10;
		no=no/10;
		
		sum=sum+i;
		sum=sum*10.0;
	}
    cout << sum/10;

	
	return 0;

}