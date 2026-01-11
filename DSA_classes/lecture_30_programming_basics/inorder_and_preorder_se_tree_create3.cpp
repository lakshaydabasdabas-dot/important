#include <iostream>
#include <queue>
using namespace std;

class node{
public:
    int data; // node ka data int maan liya hai abhi
    node *left, *right; // left and right child ke address yeh store karenge
    node(int d)
    {
        data = d;
        left = right = NULL;
    }

};

int pre[] = {8,10,1,6,4,7,3,14,13};
int k = 0;

node *createtree(int *in, int s,int e)
{
    if (s > e)
    {
        return NULL;
    }
    
    // 1. root node ham bna dete hai
    node*root = new node(pre[k]);
    k++;

    int i;
    for (int j = s; j <= e; ++j)
    {
        if (in[j] == root->data)
        {
            i = j;
            break;
        }
    }
    
    // 2. lst recursion ko bolo bna kar de
    root -> left = createtree(in,s,i-1);
    root -> right = createtree(in,i+1,e);
    return root;
}

void levelordertraversal(node*root)
{
    queue<node*> q;
    q.push(root);
    q.push(NULL);

    while(!q.empty())
    { // queue mai address dala hai taki jab left and right child ko insert karna ho
        // toh us address wali node par left and right child ke address honge, integer daal deta agr
        // toh left aur rigth child wali node nahi milti
        node *f = q.front();
        q.pop();

        if (f != NULL) // if f is pointing to a valid address
        {
            // 1. print the data
            cout << f->data << " ";

            // 2. left child hai toh insert kro in queue
            if (f -> left != NULL)
            {
                // address jayega left child ka
                q.push(f->left);
            }

            // 3. right child hai toh insert kro in queue
            if (f -> right != NULL)
            {
                // address jayega right child ka
                q.push(f->right);
            }
            
        }
        else
        {
            cout << endl;
            if (!q.empty())
            {
                q.push(NULL);
            }
        }
    }
}


int main()
{
    int in[] = {1,10,4,6,7,8,3,13,14};
    int n = sizeof(in)/sizeof(int);

    node*root = createtree(in,0,n-1);

    levelordertraversal(root);

}