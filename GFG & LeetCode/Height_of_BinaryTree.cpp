#include <iostream>
using namespace std;

// Structure for a binary tree node
struct Node {
    int data;
    Node* left;
    Node* right;

    Node(int value) {
        data = value;
        left = right = nullptr;
    }
};

// -----------------------------------------------------------------

class Solution {
public:
    // Helper function to calculate height and update the diameter
    int findDiameter(Node* root, int &diameter) {
        if (root == nullptr) return 0;

        // Compute height of left and right subtrees
        int leftHeight = findDiameter(root->left, diameter);
        int rightHeight = findDiameter(root->right, diameter);

        // Update the maximum diameter found so far
        diameter = max(diameter, leftHeight + rightHeight);

        // Return height of the current node
        return 1 + max(leftHeight, rightHeight);
    }

    // Function to find the diameter of a binary tree
    int diameterOfBinaryTree(Node* root) {
        int diameter = 0;
        findDiameter(root, diameter);
        return diameter;
    }
};

//--------------------------------------------------------------------

// Function to insert nodes in a binary tree (for testing)
Node* insertTree() {
    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->right = new Node(6);
    root->right->right->right = new Node(7);
    return root;
}

// Driver function
int main() {
    Node* root = insertTree(); // Create a sample tree

    Solution solution;
    cout << "Diameter of the binary tree: " << solution.diameterOfBinaryTree(root) << endl;

    return 0;
}
