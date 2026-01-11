#include <iostream>
#include<cstring>
using namespace std;

bool ispermutation(char *a, char *b )
{
    int freq[26] = {};
    for (int i = 0; a[i] != '\0' ; ++i)
    {
        int indx = a[i] - 'a';
        freq[indx]++;// it increases frequency
    }
    for (int i = 0; b[i] != '\0' ; ++i)
    {
        int indx = b[i] - 'a';
        freq[indx]--;// it decreases frequency
    }

    for (int i = 0; i < 26; ++i)
    {
        if (freq[i] != 0) return false;// if at end frequency is zero then yes else no
    }
    return true;
}

int main()
{
    char a[] = "abacba";
    char b[] = "bcaaba";

    if (ispermutation(a,b))
    {
        cout << "yes\n";
    }
    else
    {
        cout << "no\n";
    }
}