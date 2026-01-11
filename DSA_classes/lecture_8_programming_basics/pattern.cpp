#include <iostream>
using namespace std;


int main(){
	int i,j,no;

	cout << "type the number of rows to be printed: ";
	cin >> no;

	for (int i = 1; i <=no ; i++)
	{
		j=1;
		for (; j <=11 ; j++)
		{
			if (j == 6)
		    {
		 		cout << " ";
			}

			if (j==i+1 and j<6)
			{
				cout << " ";
			}

			if (j==no-i+6 and j>6)
			{
				cout << " ";
			}
		
		    if (j!= 6 and j!= i+1 and j!= no-i+6)
		    {
		    	cout << '*';
		    }	

		}
		

		cout << '\n';		
	}
	 
	return 0;
}