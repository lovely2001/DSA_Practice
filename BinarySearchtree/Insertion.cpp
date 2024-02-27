#include <iostream>
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

    // Recursive approach
    Node *insert(Node *root, int value)
{
    if (root == NULL)
    {
        Node *newnode = new Node(value);
        return newnode; // Fix: return the newly created node
    }
    if (root->val > value)
    {
        root->left = insert(root->left, value);
    }
    else if (root->val < value)
    {
        root->right = insert(root->right, value);
    }
    return root;
}


    void inordertraversal(Node *root)
    {
        if (root == NULL)
        {
            return;
        }
        inordertraversal(root->left);
        cout << root->val << " ";
        inordertraversal(root->right);
    }
};

int main()
{
    BST bst1;
    bst1.root = bst1.insert(bst1.root, 3);
    bst1.insert(bst1.root, 1);
    bst1.insert(bst1.root, 4);
    bst1.insert(bst1.root, 6);
    bst1.insert(bst1.root, 2);
    bst1.inordertraversal(bst1.root);
    return 0;
}
