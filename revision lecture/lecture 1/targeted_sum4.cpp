#include <iostream>
#include <vector>
using namespace std;

int main()
{
	vector<int>v = {10,20,30,40,50,60};
	int t = 60;

	int i = 0;
	int j = v.size()-1;
	int cntr = 0;

	int pairsum = v[i]+v[j];
	while(i < j)
	{
		pairsum = v[i]+v[j];
		if (pairsum == t)
		{
			cntr ++;
			j++;
			i--;
		}
		else
		{
			if (pairsum > t)
			{
				j--;
			}
			else
			{
				i++;
			}
		}
	}

	cout << cntr;
}