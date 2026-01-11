#include <iostream>
using namespace std;

void subsequence(char *ip, int i, char *op, int j)
{
    if (ip[i] == '\0')
    {
        op[j] = '\0';
        cout << op << endl;
        return;
    }

    //recursive case
    // 1.do not take the ith character at the fornt of op[]
    subsequence(ip, i + 1, op , j);
    // 2.take the i th character at the front of op[]
    op[j] = ip[i];
    subsequence(ip, i + 1, op, j + 1);
}

int main()
{
    char a[100] = "abcd", b[100];
    subsequence(a, 0, b, 0);
}