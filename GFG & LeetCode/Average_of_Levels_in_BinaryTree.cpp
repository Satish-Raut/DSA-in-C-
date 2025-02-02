#include <iostream>
#include <vector>
#include <queue>
using namespace std;

struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;

    TreeNode(int x) {
        val = x;
        left = right = nullptr;
    }
};

class Solution {
public:
    vector<double> averageOfLevels(TreeNode* root) {
        vector<double> ans;
        if (!root) return ans;

        queue<TreeNode*> q;
        q.push(root);

        while (!q.empty()) {
            int n = q.size();
            double sum = 0;

            for (int i = 0; i < n; i++) {
                TreeNode* temp = q.front();
                q.pop();
                sum += temp->val;

                if (temp->left) q.push(temp->left);
                if (temp->right) q.push(temp->right);
            }

            ans.push_back(sum / n);
        }

        return ans;
    }
};

// Helper function to print the result
void printVector(const vector<double>& result) {
    for (double val : result) {
        cout << val << " ";
    }
    cout << endl;
}

int main() {
    // Creating the test tree:
    //         3
    //       /   \
    //      9     20
    //           /  \
    //         15    7

    TreeNode* root = new TreeNode(3);
    root->left = new TreeNode(9);
    root->right = new TreeNode(20);
    root->right->left = new TreeNode(15);
    root->right->right = new TreeNode(7);

    Solution sol;
    vector<double> result = sol.averageOfLevels(root);

    cout << "Average of levels: ";
    printVector(result);

    return 0;
}
