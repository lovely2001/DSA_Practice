//TC - O(n)
//SC- O(log(n))  - 0(height of binary tree)

#include <iostream>
#include <vector>
using namespace std;

class Node
{
public:
    int val;
    Node *left;
    Node *right;

    Node(int v)
    {
        val = v;
        left = NULL;
        right = NULL;
    }
};

class BST
{
public:
    Node *root;
    BST()
    {
        root = NULL;
    }

    void preordertraversal(Node *root)
    {
        if (root == NULL)
        {
            return;
        }
        cout << root->val << " ";
        preordertraversal(root->left);
        preordertraversal(root->right);
    }
};

Node *sortedArrayToBST(vector<int> v, int start, int end)
{
    if (start > end)
    {
        return NULL;
    }
    int mid = (start + end) / 2;
    Node *root = new Node(v[mid]);
    root->left = sortedArrayToBST(v, start, mid - 1);
    root->right = sortedArrayToBST(v, mid + 1, end);
    return root;
}

int main()
{
    vector<int> v = {1, 2, 3, 4, 5, 6, 7};
    BST bst1;
    bst1.root = sortedArrayToBST(v, 0, v.size() - 1);
    bst1.preordertraversal(bst1.root);  // Use the bst1 object to call the preordertraversal function
    return 0;
}
