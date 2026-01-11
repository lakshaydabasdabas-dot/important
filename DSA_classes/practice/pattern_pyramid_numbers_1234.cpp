#include <iostream>
using namespace std;

int main(){
	int i=1,j,n,no=1;

	cout<<"write the number of rows: ";
	cin >> n;

	while (i<=n){

		j=1;

		while(j<=n-i){
		    cout << "  ";
	        j=j+1;
		}


	    while(j>n-i and j<=n){
	    	cout << no << " ";
	    	j=j+1;
	    	no=no+1;
	    }	

	    while(j>n and j<n+i){
	    	cout << no-2 << " ";
	    	no=no-1;
	    	j=j+1;
	    }
	i=i+1;
	cout << "\n";    			

	    

	    }

return 0;

	}

