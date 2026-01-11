#include <iostream>
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

node *createtree()
{
    // base case
    int data;
    cin >> data; // meine user se root ka data ka input le lia....
    if (data == -1)
    {
        return NULL; //iska matlb tree ki root node hi nhi ho sakti
    }

    // recursive case

    // 1. root ka kaam mera
    node* root = new node(data);
    // 2. LST ka kaam recursion krega
    root -> left = createtree(); //LST bna aur LST ki root ka address return krde..
    // 3. RST ka kaam recursion krega
    root -> right = createtree(); // RST bna aur RST ki root ka address reurn karde..

    // 4. return kr dunga root ka address
    return root; // jab mai bade tree ki root ko return kr rha, toh recursion bhi chote tree ko
    // bana kar uski root ka address return krega.. 
}

// transversal: preorder
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

int countnodes(node *root)
{
    if (root == NULL)
    {
        return 0;
    }

    int lstnodescount = countnodes(root->left);// recursion ko bolo lst ki nodes count laakar de
    int rstnodescount = countnodes(root->right);// recursion ko bolo rst ki nodes count laakar de

    return 1 + lstnodescount + rstnodescount;// 1 is added for root nodes ka count
}

int height(node *root)
{
    if (root == NULL)
    {
        return 0;// tree nhi hai toh height nhi hogi..
    }

    int lstkiheight = height(root->left);
    int rstkiheight = height(root->right);
    // poore tree ki height hogi lst aur rst ki height ka max+1
    int ans = max(lstkiheight, rstkiheight) + 1;
    return ans;

}

int diameter(node *root)
{
    if (root == NULL)
    {
        return 0; // tree hi nhi toh diameter hi nhi
    }

    // Case 1: root node ke through diameter hota hai lstheight + rstheight
    int lstheight = height(root->left); // lst ki height ke liye height functon use karlo
    int rstheight = height(root->right); // rst ki height ke liye height function use karlo
    int op1 = lstheight + rstheight; // yeh vo dia hai jo root ke through hota hua jaata hai
    // case 2: ho sakta hai dia exist karta ho LST ke andar, choti problem ho gai toh bolo rec ko
    int op2 = diameter(root->left); // LST mei jaakar maximum diameter laakar dede(ASSUMPTION)

    // case 3: ho sakta hai dia exist karta ho RST ke andar, choti problem ho gai toh bolo rec ko
    int op3 = diameter(root->left); // RST mei jaakar maximum diameter laakar dede(ASSUMPTION)

    // pehle op2 and op3 ka maximum nikal lo and then us result ka max lelo with op1
    // toh teeno ka max aa jaega... why? because max takes only two arguments at a time...
    return max(op1 , max(op2,op3) );
}

class Pair {
public:
    int height, diameter;
};

Pair fastdiameter(node *root){
    //base case
    if (root == NULL)
    {
        Pair ans;//tree hi nhi hai toh na height hogi na diameter hoga
        ans.height = ans.diameter = 0;
        return ans;
    }

    // lst se bolo pair dede height and diameter ka
    Pair left = fastdiameter(root -> left);
    // rst se bolo Pair dede height and max diameter ka
    Pair right = fastdiameter(root -> right);

    // root ke liye hum nikal lete hai answer
    Pair ans;
    // height toh lst and rst ki height ka max + 1 hoga
    ans.height = max(left.height, right.height)+1;
    //diameter
    int op1 = left.height + right.height;
    int op2 = left.diameter;
    int op3 = right.diameter;
    ans.diameter = max(op1,max(op2,op3));
    return ans; 
}

int main()
{
    // 8 10 1 -1 -1 6 4 -1 -1 7 -1 -1 3 -1 14 13 -1 -1 -1
    node *root = createtree();
    preorder(root);
    cout << endl;
    inorder(root);
    cout << endl;
    postorder(root);
    cout << endl;
    cout << "count nodes : " << countnodes(root) << endl;
    cout << "height      : " << height(root) << endl;
    cout << "diameter    : " << diameter(root) << endl;

    Pair ans = fastdiameter(root);
    cout << "fast height : " << ans.height << endl;
    cout << "fast diameter : " << ans.diameter << endl;

}