#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node(int val){
        data=val;
        next=NULL;
    }
};

void insertAtstart(Node* &head, int value){
    Node * new_node = new Node(value);
    new_node->next = head;
    head = new_node;

} 

void insertatend(Node* head, int val){
    Node * new_node = new Node(val);
    Node * temp = head;

    while(temp->next != NULL){
        temp= temp->next;
    }
    temp->next = new_node;
}

void display(Node * head){
    Node * temp = head;
    while(temp != NULL){
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
}

int main(){
    Node* head = NULL;
    insertAtstart(head,10);
    display(head);
    insertatend(head,1);
    display(head);
    insertatend(head,2);
    display(head);
    insertatend(head,3);
    display(head);
    insertAtstart(head,20);
    display(head);
}