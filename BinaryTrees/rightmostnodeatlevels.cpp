#include <iostream>
#include <queue>
#include <vector>
using namespace std;

class Node {
public:
    int value;
    Node* left;
    Node* right;

    Node(int v) {
        value = v;
        left = right = NULL;
    }
};

vector<int> rightmostview(Node* rootNode) {
    vector<int> ans;
    if (rootNode == NULL) {
        return ans;
    }

    queue<Node*> q;
    q.push(rootNode);

    while (!q.empty()) {
        int nodeatcurrentlevel = q.size();
        while (nodeatcurrentlevel--) {
            Node* currentnode = q.front();
            q.pop();

            if (nodeatcurrentlevel == 0) {
                ans.push_back(currentnode->value);
            }

            if (currentnode->left) {
                q.push(currentnode->left);
            }

            if (currentnode->right) {
                q.push(currentnode->right);
            }
        }
    }

    return ans; // Don't forget to return the result
}

int main() {
    Node* root = new Node(2);
    root->left = new Node(4);
    root->right = new Node(10);
    root->left->left = new Node(6);
    root->left->right = new Node(5);
    root->right->right = new Node(11);

    vector<int> ans = rightmostview(root);
    for (auto ele : ans) {
        cout << ele << endl;
    }

    return 0;
}
