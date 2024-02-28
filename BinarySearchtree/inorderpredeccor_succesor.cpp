//inorder predecessor -> Greatest value smaller than key
//inorder succesor -> smallest value greater than key

#include <iostream>
#include <vector>
using namespace std;

class Node
{
public:
    int value;
    Node *left;
    Node *right;

    Node(int v)
    {
        value = v;
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
        if (root->value > value)
        {
            root->left = insert(root->left, value);
        }
        else if (root->value < value)
        {
            root->right = insert(root->right, value);
        }
        return root;
    }
};

void InordPreSuccBST(Node* root, Node* &pre, Node* &succ, int key){
    if(root==NULL){
        return;
    }

    if(root->value == key){
        //pre ----> rightnode value in left subtree
        if(root->left != NULL){
            Node*temp = root->left;
            while(temp->right!=NULL){
                temp=temp->right;
            }
            pre=temp;
        }
        //succ ----> leftmost node in right subtree
        if(root->right != NULL){
            Node*temp=root->right;
            while(temp->left != NULL){
                temp=temp->left;
            }
            succ=temp;
        }
    }
    else if(root->value > key){
        succ=root;
        InordPreSuccBST(root->left,pre,succ,key);
    }else{
        pre=root;
        InordPreSuccBST(root->right,pre,succ,key);
    }
}

int main()
{
    BST bst1;
    bst1.root = bst1.insert(bst1.root, 3);
    bst1.insert(bst1.root, 1);
    bst1.insert(bst1.root, 4);
    bst1.insert(bst1.root, 6);
    bst1.insert(bst1.root, 2);
    
    Node* pre=NULL;
    Node* succ=NULL;
    InordPreSuccBST(bst1.root,pre,succ,6);
    if(pre!=NULL){
        cout<<"Pre : "<<pre->value<<endl;
    }else{
        cout<<"Pre does not exist"<<endl;
    }
    if(succ!=NULL){
        cout<<"Pre : "<<succ->value<<endl;
    }else{
        cout<<"Pre does not exist"<<endl;
    }
    return 0;
}
