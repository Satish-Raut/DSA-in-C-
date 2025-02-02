#include <iostream>
#include <vector>
#include <queue>
using namespace std;

struct Node {
    int data;
    Node* left;
    Node* right;
    
    Node(int val) {
        data = val;
        left = right = nullptr;
    }
};
// --------------------------------------------------------------------

vector<vector<int>> levelOrderTraversal(Node* root) {
    vector<vector<int>> result;
    if (!root) return result;

    queue<Node*> q;
    q.push(root);

    while (!q.empty()) {
        int levelSize = q.size();
        vector<int> levelNodes;

        for (int i = 0; i < levelSize; i++) {
            Node* temp = q.front();
            q.pop();
            levelNodes.push_back(temp->data);

            if (temp->left) q.push(temp->left);
            if (temp->right) q.push(temp->right);
        }
        result.push_back(levelNodes);
    }
    return result;
}

// -----------------------------------------------------------------------
int main() {
    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->left = new Node(6);
    root->right->right = new Node(7);

    vector<vector<int>> levels = levelOrderTraversal(root);

    cout << "Level Order Traversal (2D Vector):\n";
    for (const auto& level : levels) {
        for (int val : level) {
            cout << val << " ";
        }
        cout << endl;
    }

    return 0;
}
