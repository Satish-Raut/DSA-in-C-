
//Binary search -> Insertion , Deletion, Searching

#include<iostream>
using namespace std;

class Node
{
    public:
        int data;
        Node *left, *right;

        Node(int val)
        {
            data = val;
            left = right = NULL;
        }
};

Node *Insert(Node *root, int target)
{
    if(root == NULL)
    {
        Node *temp = new Node(target);
        return temp;
    }

    if(target > root->data)
    {
        root->right = Insert(root->right, target);
    }
    else{
        root->left = Insert(root->left, target);
    }

    return root;
}

void Display(Node *root)
{
    if(root == NULL)
    {
        return;
    }

    Display(root->left);
    cout<<root->data<<" ";
    Display(root->right);
}

bool Search(Node *root, int target)
{
    if(root == NULL)
    {
        return 0;
    }

    if(root->data == target)
    {
        return 1;
    }
    else if(root->data > target)
    {
        return Search(root->left, target);
    }
    else{
        return Search(root->right, target);
    }
}

Node *deleteNode(Node *root, int X) {
    // your code goes here
    if(root == NULL)
    {
        return NULL;
    }
    else if(root->data > X)
    {
        root->left = deleteNode(root->left, X);
        return root;
    }
    else if(root->data < X){
        root->right = deleteNode(root->right, X);
        return root;
    }
    else{
        if(root->left == NULL && root->right == NULL) //Deletion of leaf Node
        {
            delete root;
            return NULL;
        }
        else if(root->left == NULL) //Only right child is exist 
        {
            Node *temp = root->right;
            delete root;
            return temp;
        }
        else if(root->right == NULL)    //Only left child is exist
        {
            Node *temp = root->left;
            delete root;
            return temp;
        }
        else                           //Both the child exist
        {
            Node *child = root->left;
            Node *parent = root;
            
            while(child->right)
            {
                parent = child;
                child = child->right;
            }
            
            if(parent != root)
            {
                parent->right = child->left;
                child->right = root->right;
                child->left = root->left;
                delete root;
                return child;
            }
            else{
                child->right = root->right;
                delete root;
                return child;
            }
        }
    }
}


int main()
{
    int arr[] = {3, 7, 4, 1, 6, 8}, n = 6;

    Node *root = NULL;
    for(int i = 0; i<n; i++)
    {
        root = Insert(root, arr[i]);
    }

    cout<<"Binary search tree elements in In-order: ";
    Display(root);
    cout<<"\n"<<Search(root, 8)<<endl;  ;

    deleteNode(root, 7);

    cout<<"Binary search tree elements in In-order: ";
    Display(root);
}