//reverse k node at a time

#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node(int val){
        data = val;
        next = NULL;
    }
};

class Linkedlist{
    public:
    Node* head;

    Linkedlist(){
        head=NULL;
    }

    void insertatend(int val){
        Node * new_node = new Node(val);
        if(head==NULL){
            head=new_node;
            return;
        }
    
        Node * temp = head;

        while(temp->next != NULL){
            temp= temp->next;
        }
        temp->next = new_node;
    }

    void display(){
        Node* temp = head;
        while(temp != NULL){
            cout<<temp->data<<" ";
            temp=temp->next;
        }
    cout<<"NULL"<<endl;
    }   
};

Node* reverseknode(Node* head, int k){
    Node* prevptr=NULL;
    Node* currptr=head;
    
    int counter = 0;
    while(currptr!=NULL && counter<k){
        Node* nextptr = currptr->next;
        currptr->next = prevptr;
        prevptr=currptr;
        currptr=nextptr;
        counter++;
    }

    if(currptr!=NULL){
        Node* newhead = reverseknode(currptr,k);
        head->next=newhead;
    }

    return prevptr;
}

int main(){
    Linkedlist ll;
    ll.insertatend(1);
    ll.insertatend(2);
    ll.insertatend(3);
    ll.insertatend(4);
    ll.insertatend(5);
    ll.insertatend(6);
    ll.display();
    ll.head = reverseknode(ll.head,4);
    ll.display();
}