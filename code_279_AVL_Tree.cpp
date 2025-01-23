

#include<iostream>
using namespace std;

class Node
{
    public:
        int data, height;
        Node *left, *right;

        Node(int val)
        {
            data = val;
            height = 1;
            left = right = NULL;
        }
};

int getheight(Node *root)
{
    if(root == NULL)
    {
        return 0;
    }
    return root->height;
}

int getbalance(Node *root)
{
    return getheight(root->left) - getheight(root->right);
}

Node *rightRotation(Node *root){
    Node *child = root->left;
    Node *childRight = child->right;

    child->right = root;
    root->left = childRight;

    //update height
    root->height = 1 + max(getheight(root->left), getheight(root->right));
    child->height = 1 + max(getheight(child->left), getheight(child->right));

    return child;
}

Node *leftRotation(Node *root){
    Node *child = root->right;
    Node *childLeft = child->left;

    child->left = root;
    root->right = childLeft;

    //update height
    root->height = 1 + max(getheight(root->left), getheight(root->right));
    child->height = 1 + max(getheight(child->left), getheight(child->right));

    return child;
}

Node *insert(Node *root, int key)
{
    if(root == NULL)
    {
        return new Node(key);
    }

    if(key < root->data)
    {
        root->left = insert(root->left, key);
    }
    else if(key > root->data)
    {
        root->right = insert(root->right, key);
    }
    else{
        return root;  //Duplicate elements are not allowed
    }

    //Update the height

    root->height = 1 + max(getheight(root->left), getheight(root->right));

    //check Balancing
    int balance = getbalance(root);
    
    if(balance > 1 && key < root->left->data)            //Left-Left
    {
        return rightRotation(root);
    }
    else if(balance < -1 && key > root->right->data)     //Right-Right
    {
        return leftRotation(root);
    }
    if(balance > 1 && key > root->left->data)           //Left-Right
    {
        root->left = leftRotation(root->left);
        return rightRotation(root);
    }
    if(balance < -1 && key < root->right->data)         //Right-Left
    {
        root->right = rightRotation(root->left);
        return leftRotation(root);
    }
    else                                                //Unbalancing
    {
        return root;
    }

}

void preorder(Node *root)
{
    if(root == NULL)
    {
        return;
    }

    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
}
void Inorder(Node *root)
{
    if(root == NULL)
    {
        return;
    }

    Inorder(root->left);
    cout<<root->data<<" ";
    Inorder(root->right);
}

int main()
{

    Node *root = NULL;
    root = insert(root, 5);
    root = insert(root, 10);
    root = insert(root, 15);
    root = insert(root, 20);
    root = insert(root, 25);
    root = insert(root, 30);
    root = insert(root, 35);
    root = insert(root, 40);
    root = insert(root, 45);
    root = insert(root, 50);


    cout<<"Pre-Order: "<<endl;
    preorder(root);
    cout<<"\nIn-Order: "<<endl;
    Inorder(root);

}