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

int heightofbinarytree(Node* rootnode){

    if(rootnode==NULL){
        return 0;
    }

    int heightofleftsubtree = heightofbinarytree(rootnode->left);
    int heightofrightsubtree = heightofbinarytree(rootnode->right);

    return max(heightofleftsubtree,heightofrightsubtree)+1;
}

int main(){
    Node* root = new Node(2);
    root->left = new Node(4);
    root->right = new Node(10);
    root->left->left = new Node(6);
    root->left->right = new Node(5);
    root->right->right = new Node(11);
    root->right->right->right = new Node(14);

    cout<<"height of binary tree : "<<heightofbinarytree(root)<<endl;
}