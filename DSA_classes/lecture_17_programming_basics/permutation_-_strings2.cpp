#include <iostream>
using namespace std;

void permutation(string ip, string op)
{
    //base case
    if (ip.size() == '\0')
    {
        cout << op << endl;
    }

    //recursive case
    // ith position par tum log (i, last character) ke har characetr ek ek baari rakhdo
    //baaki ka kaam recursion ko boldo
    for (int i = 0; i < ip.size() ; ++i)
    {
        permutation( ip.substr(0,i) + ip.substr(i+1), op+ip[i]);
    }
}

int main()
{
    string ip = "abc";
    string op = "";
    permutation(ip,op);

    // s+='g'; // yaha string s update ho gyi
    // cout << s << endl;

    // cout << s+'h' << endl;
    // cout << s << endl;

    //ith character hatana
    // int i = 3;
    // cout << s.substr(0,i) + s.substr(i+1) << endl;
    //permutation(a,0);
}