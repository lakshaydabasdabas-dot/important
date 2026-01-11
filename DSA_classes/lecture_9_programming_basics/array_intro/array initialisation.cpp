#include <iostream>
using namespace std;


int main(){

	//even if bucket is not initialised then also size of operator is the number of buckets in array*size of one bucket(datatype)
	int a[10]={1,2,3,4,5};
	int n=5;

	cout << sizeof(a) << endl;

	for (int i = 0; i < n; ++i)
	{
		a[i]=i+1;
		cout << a[i] << " ";
	}
	cout << endl;

	return 0;
}
