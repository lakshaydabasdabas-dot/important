#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<vector<int>> v;
    vector<int> x = {1, 2, 3};
    v.push_back(x);

    v.push_back({4, 5, 6, 10, 11, 12});
    v.push_back({7, 8, 9});

    for (int i = 0; i < v.size(); ++i)
    {
        cout << "v[" << i << "] => size: " << v[i].size()
             << ", capacity: " << v[i].capacity() << endl;

        cout << "  Elements: ";
        //v[0].push_back(100);
        for (int j = 0; j < v[i].size(); ++j)
        {
            cout << v[i][j] << " ";
        }
        cout << endl << endl;
    }

    return 0;
}
