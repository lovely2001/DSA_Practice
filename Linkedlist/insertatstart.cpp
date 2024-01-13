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

void display(Node* head){
    Node * temp = head;
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
}
int main(){
    Node * head;
    head = NULL;

    insertAtstart(head,1);
    display(head);
    insertAtstart(head,2);
    display(head);
    insertAtstart(head,3);
    display(head);
}