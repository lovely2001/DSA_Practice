#include<iostream>
using namespace std;

class Node{
    public:
    int value;
    Node* left;
    Node* right;

    Node(int v){
        value=v;
        left=right=NULL;
    }
};

int noofleafnode(Node* rootnode){

    if(rootnode==NULL){
        return 0;
    }
    if(rootnode->left==NULL && rootnode->right==NULL){
        return 1;
    }

    int leafnodeinleftsubtree = noofleafnode(rootnode->left);
    int leafnodeinrightsubtree = noofleafnode(rootnode->right);

    return leafnodeinleftsubtree+leafnodeinrightsubtree;
}

int main(){
    Node* root = new Node(2);
    root->left = new Node(4);
    root->right = new Node(10);
    root->left->left = new Node(6);
    root->left->right = new Node(5);
    root->right->right = new Node(11);
    root->right->right->left = new Node(11);
    root->right->right->right = new Node(14);

    cout<<"Number of leaf node in binary tree : "<<noofleafnode(root)<<endl;
}