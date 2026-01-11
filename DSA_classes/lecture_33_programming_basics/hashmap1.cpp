#include <iostream>
#include <string>
using namespace std;

class node {
public:
    string key;
    int value;
    node *next;

    node(string k, int v) {
        key = k;
        value = v;
        next = NULL;
    }
};

class hashmap {
    node **a;
    int ts; // table size
    int cs; // current size

    int hashfn(string key) {
        int ans = 0;
        int mul = 1;
        for (int i = 0; i < key.size(); ++i) {
            ans = (ans + (key[i] * mul) % ts) % ts;
            mul = (mul * 13) % ts; // keep it small
        }
        return ans;
    }

    void rehashing() {
        node **olda = a;
        int oldts = ts;

        ts = 2 * ts;
        cs = 0;
        a = new node*[ts];

        for (int i = 0; i < ts; i++)
            a[i] = NULL;

        // reinsert old elements
        for (int i = 0; i < oldts; i++) {
            node *head = olda[i];
            while (head != NULL) {
                insert(head->key, head->value);
                node *oldhead = head;
                head = head->next;
                delete oldhead;
            }
        }
        delete[] olda;
    }

public:
    hashmap(int s = 5) {
        ts = s;
        cs = 0;
        a = new node*[ts];

        for (int i = 0; i < ts; i++) {
            a[i] = NULL;
        }
    }

    void insert(string key, int value) {
        int index = hashfn(key);

        node *n = new node(key, value);
        n->next = a[index];
        a[index] = n;
        cs++;

        float load_factor = cs / (ts * 1.0);
        if (load_factor > 0.7) {
            rehashing();
        }
    }

    node* search(string key)
    {
        int indx = hashfn(key);
        node *head = a[indx];

        while (head != NULL)
        {
            if (head->key == key)
            {
                return head;
            }
            head = head->next;
        }
        return NULL;
    }

    void print()
    {
        for (int i = 0; i < ts; ++i)
        {
            node *head = a[i];
            cout << i << " : ";

            while (head != NULL)
            {
                cout << "(" << head->key << ", " << head->value << ") -> ";
                head = head->next;
            }
            cout << "NULL" << endl;
        }
    }

    // operator overloading of[]
    int& operator[](string key)
    {
        node*ans = search(key);
        if (ans == NULL)//insertoin
        {
            int x;
            insert(key,x);

            ans = search(key);
        }
            
        return ans->value;
    }
};

int main() {
    hashmap h;
    h.insert("apple", 100);
    h.insert("banana", 120);
    h.insert("mango", 140);
    h.insert("pineapple", 50);
    h.insert("kiwi", 200);
    //h.print();

    h["orange"] = 100; // inserton
    h["orange"] = 120; // updation
    cout << h["orange"] << endl; // search

    //cout << endl;
    //node* ans = h.search("banana");
    //if(ans != NULL)
    //    cout << "Found banana, value = " << ans->value << endl;
    //else
    // {
    //    cout << "Not Found" << endl;
    // };

}    