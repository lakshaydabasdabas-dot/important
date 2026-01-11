#include <iostream>
#include <unordered_map>
using namespace std;

class node{
public:
    char ch;
    bool isEnd;
    unordered_map<char, node*> h;
    node(char c)
    {
        ch = c;
        isEnd = false;
    }
};
class trie{
public:
    node* root;
    trie(){
        root = new node('\0');
    }

    void addword(string word)
    {
        node* temp = root;

        for (int i = 0; i < word.size(); ++i)
        {
            char ch = word[i];
            if (temp -> h.count(ch) == 1)
            {
                temp = temp -> h[ch];
            }
            else{
                node* n = new node(ch);
                temp -> h[ch] = n;
                temp = n;
            }
        }

        temp -> isEnd = true;
    }

    bool searchword(string word)
    {
        node* temp = root;

        for (int i = 0; i < word.size(); ++i)
        {
            char ch = word[i];
            if (temp->h.count(ch) == 1)
            {
                temp = temp->h[ch];
            }
            else
            {
                return false;
            }
        }
        return temp->isEnd;
    }
};
 
int main()
{
    trie t;

    t.addword("Hello");
    t.addword("Hello World");
    t.addword("World");
    t.addword("Coding");
    t.addword("Code");
    t.addword("Coder");

    while (true) {
        string x;
        cin >> x;

        if (t.searchword(x))
        {
            cout << "yes";
        }
        else
        {
            cout << "no";
        }
    }

}