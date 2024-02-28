//TC - O(N)
//SC - O(height of tree)

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

    void preordertraversal(Node* root){
        if(root==NULL){
            return;
        }

        cout<<root->val<<" "; 
        preordertraversal(root->left);
        preordertraversal(root->right);
    }
};

Node *removeleafnodes(Node* root){
    if(root==NULL){
        return NULL;
    }
    if(root->left == NULL && root->right == NULL){
        return NULL;
    }
    root->left=removeleafnodes(root->left);
    root->right=removeleafnodes(root->right);
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
    
    bst1.preordertraversal(bst1.root);
    cout<<endl;
    bst1.root = removeleafnodes(bst1.root);
    bst1.preordertraversal(bst1.root);
    cout<<endl;
    return 0;
}
