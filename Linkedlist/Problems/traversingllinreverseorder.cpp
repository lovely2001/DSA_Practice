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

void traverseinreverse(Node * head){
    if(head==NULL){
        return;
    }
    traverseinreverse(head->next);
    cout<<head->data<<" ";
}
int main(){
    Linkedlist ll;
    ll.insertatend(1);
    ll.insertatend(2);
    ll.insertatend(2);
    ll.insertatend(3);
    ll.insertatend(3);
    ll.insertatend(3);
    ll.display();
    traverseinreverse(ll.head);
   
}