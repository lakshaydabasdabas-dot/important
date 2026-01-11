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

node *mergesort(node *head)
{
    if (head == NULL or head -> next == NULL)
    {
        return head;
    }

    // 1. Divide
    node *a = head;
    node *m = midLL(head);
    node *b = m->next;
    m->next = NULL;

    // 2. Sort
    a = mergesort(a);
    b = mergesort(b);

    // 3. Merge
    node *nH = mergeSortedLL(a, b);
    return nH;
}

void bubblesort(node *&head)
{
    int len_N = lengthLL(head);

    for (int i = 0; i < len_N-1; ++i)
    {
        node *p = NULL, *c = head;
        while(c != NULL and c -> next != NULL)
        {
            node *n = c -> next;

            if (c -> data > n -> data)
            {
                //swapping hogi...
                if (p == NULL)
                {
                   //head change
                   c->next = n->next;
                    n->next = c;
                    head = n;
                    p = n; 
                }
                else
                {
                    //head change nhi hoga
                    c -> next = n -> next;
                    n -> next = c;
                    p -> next = n;
                    p = n;
                }
            }
            else
            {
                //swapping nahi hogi....
                p = c;
                c = n;
            }
        }
    }
}

int main()
{
    node *head,*tail;
    head = tail = NULL;
    
    insertatend(head, tail, 10);
    insertatend(head, tail, 2);
    insertatend(head, tail, 4);
    insertatend(head, tail, 1);
    insertatend(head, tail, 6);

    printLL(head);
    //head = mergesort(head);
    bubblesort(head);
    printLL(head);

    return 0;
}