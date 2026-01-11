#include <iostream>
#include <queue>
using namespace std;

class node{
public:
    int data; 
    node *left, *right; 
    node(int d)
    {
        data = d;
        left = right = NULL;
    }

};

// pehli baari root ko null hoga jab pehla data insert hoga toh root null thodi rahega
// root ka address return krna padega thus insertinBST has to return address of root node
// iska kaam hai data ki sahi position dhoondo and usse waha attach kardo as node
node * insertinBST(node *root, int data)
{
    if (root == NULL)
    {
        root = new node(data);
        return root;
    }

    if (root->data > data)
    {
        root -> left = insertinBST(root -> left,data);
        return root;
    }
    else
    {
        root -> right = insertinBST(root -> right,data);
        return root;
    }
}

// yeh user se input leta rahega ek ek karke and vo saare inputs pass karega insertinBST ko
// taki data as a node attach hota rahe in tree
node * buildBST()
{
    node *root = NULL;
    int data;
    cin >> data;

    while (data != -1)
    {
        root = insertinBST(root, data);
        cin >> data;   // ← important line
    }
    return root;
}


void preorder(node *root)
{
    if (root == NULL)
    {
        return;
    }
    cout << root->data << " ";//ye root ka kaam ham krenge
    preorder(root->left);//LST ka kaam recursion karega
    preorder(root->right);//RST ka kaam recursion karega
}

void inorder(node *root)
{
    if (root == NULL)
    {
        return;
    }
    inorder(root->left);//LST ka kaam recursion karega
    cout << root->data << " ";//ye root ka kaam ham krenge
    inorder(root->right);//RST ka kaam recursion karega
}

void postorder(node *root)
{
    if (root == NULL)
    {
        return;
    }
    postorder(root->left);//LST ka kaam recursion karega
    postorder(root->right);//RST ka kaam recursion karega
    cout << root->data << " ";//ye root ka kaam ham krenge
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

    node *root = buildBST();
    preorder(root);
    cout << endl;
    inorder(root);
    cout << endl;
    postorder(root);
    cout << endl;

    levelordertraversal(root);
    cout << endl;

    return 0;
}