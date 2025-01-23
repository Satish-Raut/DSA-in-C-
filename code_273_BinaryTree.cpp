#include <iostream>
#include <queue>
using namespace std;

class Node {
public:
    int data;
    Node *left, *right;

    Node(int val) {
        data = val;
        left = NULL;
        right = NULL;
    }
};

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

int main() {
    int x, first, sec;
    queue<Node*> q;

    cout << "Enter the root element: ";
    cin >> x;
    
    Node *root = new Node(x);
    q.push(root);
    
    while (!q.empty()) {
        Node *temp = q.front();
        q.pop();
        
        cout << "Enter left node element (-1 for no left child): ";
        cin >> first;
        if (first != -1) {
            temp->left = new Node(first);
            q.push(temp->left);
        }
        
        cout << "Enter right node element (-1 for no right child): ";
        cin >> sec;
        if (sec != -1) {
            temp->right = new Node(sec);
            q.push(temp->right);
        }
    }

    preorder(root);
    
    return 0;
}
