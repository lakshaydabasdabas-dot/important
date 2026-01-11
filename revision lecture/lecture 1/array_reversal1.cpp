#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> v = {10,20,30,40,50,60,70};
    int n = v.size();

    int i = 0;
    int j = n-1;

    while(i < j)
    {
        swap(v[i],v[j]);
        i++;
        j--;
    }

    for (int i = 0; i < n; i++)
    {
        cout << v[i] << " ";  
    }
    cout << endl;
}