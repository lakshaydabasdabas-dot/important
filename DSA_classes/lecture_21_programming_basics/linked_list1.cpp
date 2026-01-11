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

int lengthLL(node *head)//incomplete
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

int main()
{
    node *head,*tail;
    head = tail = NULL;

    
    insertatfront(head, tail, 1);
    insertatfront(head, tail, 2);
    insertatfront(head, tail, 3);
    insertatfront(head, tail, 4);
    insertatfront(head, tail, 5);
    insertatend(head, tail, 6);
    insertatend(head, tail, 7);
    

    printLL(head);

    cout << "Length of Linked List: " << lengthLL(head) << endl;
    insertatmid(head, tail, 11, 4);
    printLL(head);

}