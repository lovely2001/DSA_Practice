#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node* prev;

    Node(int val){
        data=val;
        prev=NULL;
        next=NULL;
    }
};

class doublylinkedlist{
    public:
    Node* head;
    Node* tail;
    doublylinkedlist(){
        head=NULL;
        tail=NULL;
    }

};

int main(){
    Node* newnode = new Node(3);
    doublylinkedlist dll;
    dll.head=newnode;
    dll.tail=newnode;
    cout<<dll.head->data<<endl;
    cout<<dll.tail->data<<endl;
}