#include <iostream>
using namespace std;

class node
{
public:
    int data;
    node* next;

    node(int d)
    {
        data = d;
        next = NULL;
    }   
};

int lengthLL(node *head)
{
    int ans = 0;
    while (head != NULL)
    {
        ans++;
        head = head->next;
    }
    return ans;

}

void insertatfront(node *&head, node *&tail, int data){
    if (head == NULL)
    {
        head = tail = new node(data);// head = tail = 100(example) in dynamic memory allocation
    }
    else
    {
        node *n = new node(data);
        n->next = head;
        head = n;

    }
}

void insertatend(node *&head, node *&tail, int data){
    if (head == NULL)
    {
        head = tail = new node(data);
    }
    else
    {
        node *n = new node(data);
        tail->next = n;
        tail = n;
    }
}

void insertatmid(node *&head, node *&tail, int data, int pos){
    if (pos == 0)
    {
        insertatfront(head, tail, data);
    }
    else if (pos >= lengthLL(head) - 1)
    {
        insertatend(head, tail, data);
    }
    else{
        node *t = head;
        for (int i = 1; i < pos; ++i)
        {
            t = t->next;
        }

        node *n = new node(data);
        n->next = t-> next;
        t->next = n;
    }
}

void printLL(node *head)
{
    while(head != NULL)
    {
        cout << head->data << "-->";
        head = head->next;
    }
    cout << "NULL\n";
}

node *midLL(node *head)
{
    if (head == NULL || head -> next == NULL)
    {
        return head;
    }
    node *f = head -> next;
    node *s = head;
    while(f != NULL and f -> next != NULL)
    {
        f = f->next->next;
        s = s->next;
    }

    return s;
}

/*node *searchLL(node *head, int key)
{
    if (head == NULL)
    {
        return NULL;
    }

    if (head -> data == key)
    {
        return head;
    }

    node *x = searchLL(head -> next, key);
    if (x != NULL)
    {
        return x;
    }
    return NULL;
}*/

node *searchLL(node *head, int key)
{
    if (head == NULL)
    {
        return NULL;
    }

    if (head -> data == key)
    {
        return head;
    }

    return searchLL(head -> next, key);
}

node *mergeSortedLL(node *a,node *b)
{
    if (a == NULL) return b;
    if (b == NULL) return a;
    
    node *nH;
    if (a->data<b->data)
    {
        nH = a;
        nH->next = mergeSortedLL(a->next, b);
    }
    else{
        nH = b;
        nH -> next = mergeSortedLL(a, b->next);
    }

    return nH;
}

int main()
{
    node *head,*tail;
    head = tail = NULL;

    node *head1, *tail1;
    head1 = tail1 = NULL;

    
    insertatend(head, tail, 1);
    insertatend(head, tail, 3);
    insertatend(head, tail, 4);
    insertatend(head, tail, 6);
    insertatend(head1, tail1, 2);
    insertatend(head1, tail1, 5);
    insertatend(head1, tail1, 7);
    insertatend(head1, tail1, 8);

    node *nH = mergeSortedLL(head, head1);
    printLL(nH);

    return 0;
}