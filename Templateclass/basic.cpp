//template class for linkedll

#include<iostream>
using namespace std;

template<typename T>

class Node{
    public:
    T data;
    Node* next;

    Node(T val){
        data=val;
        next=NULL;
    }
};

int main(){
    Node<int>* node1 = new Node<int>(3);
    cout<<node1->data<<endl;

    Node<char>* node2 = new Node<char>('a');
    cout<<node2->data<<endl;
}