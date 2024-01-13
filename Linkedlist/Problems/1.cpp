//Delete alternate elements

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


void deletealternateelement(Node* &head){
    Node* curr= head;
    while(curr!=NULL && curr->next!=NULL){
        Node* deletenode = curr->next;
        curr->next = curr->next->next;
        free(deletenode);
        curr = curr->next;
    }
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
    deletealternateelement(ll.head);
    ll.display();
}