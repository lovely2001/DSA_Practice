#include<iostream>
#include<queue>
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

void preordertraversal(Node* rootnode){
    if(rootnode == NULL){
        return;
    }

    cout<<rootnode->value<<" ";
    preordertraversal(rootnode->left);
    preordertraversal(rootnode->right);
}


void Inordertraversal(Node* rootnode){
    if(rootnode == NULL){
        return;
    }

    Inordertraversal(rootnode->left);
    cout<<rootnode->value<<" ";
    Inordertraversal(rootnode->right);
}

void Postordertraversal(Node* rootnode){

    //Base Case
    if(rootnode == NULL){
        return;
    }
    
    //recursive Case
    Postordertraversal(rootnode->left);
    Postordertraversal(rootnode->right);
    cout<<rootnode->value<<" ";
}

void levelorderTraversal(Node* rootNode){
    if(rootNode == NULL){
        return;
    }

    queue<Node*> q;
    q.push(rootNode);

    while (!q.empty()) {
        Node* currentnode = q.front();
        q.pop();

        cout << currentnode->value << " ";

        if (currentnode->left) {
            q.push(currentnode->left);
        }

        if (currentnode->right) {
            q.push(currentnode->right);
        }
    }
}

int main(){
    Node* root = new Node(2);
    root->left = new Node(4);
    root->right = new Node(10);
    root->left->left = new Node(6);
    root->left->right = new Node(5);
    root->right->right = new Node(11);
    
    cout<<"Preorder Traversal :  " <<endl;
    preordertraversal(root);
    cout<<endl;

    cout<<"Inorder Traversal :  " <<endl;
    Inordertraversal(root);
    cout<<endl;

    cout<<"Postorder Traversal :  " <<endl;
    Postordertraversal(root);
    cout<<endl;

    cout<<"Levelorder Traversal :  " <<endl;
    levelorderTraversal(root);
    cout<<endl;
}