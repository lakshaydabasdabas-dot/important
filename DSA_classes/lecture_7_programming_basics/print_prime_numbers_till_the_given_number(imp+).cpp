#include <iostream>
using namespace std;
#define a << endl;

int main(){
	int no,i=2,j=2;

	cout << "type the number: ";
	cin >> no;

	for (int j = 2; j<=no; j=j+1)
	{i=2;
		while (j>i)
	    {
	    	if (j%i==0)
	    	{
	    		break;
	    	}
	    	i=i+1;
	    }
        if (i==j)
        {
        	cout << j << endl;
        }
    }
    return 0;}