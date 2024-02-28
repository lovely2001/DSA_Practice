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
};

Node *lowercommonancestor(Node *root, Node *node1, Node *node2)
{

    if ((root->val > node1->val) && (root->val > node2->val))
    {
        lowercommonancestor(root->left, node1, node2);
    }
    if ((root->val < node1->val) && (root->val < node2->val))
    {
        lowercommonancestor(root->right, node1, node2);
    }

    // if root value lies between node1 and node2 value or if its value is equal
    return root;
}

int main()
{
    BST bst1;
    bst1.root = bst1.insert(bst1.root, 3);
    bst1.insert(bst1.root, 1);
    bst1.insert(bst1.root, 4);
    bst1.insert(bst1.root, 6);
    bst1.insert(bst1.root, 2);
    Node *node1 = new Node(2);
    Node *node2 = new Node(4);
    Node *lowestanc = lowercommonancestor(bst1.root, node1, node2);
    cout << lowestanc->val;
    return 0;
}
