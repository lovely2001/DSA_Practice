//find middle element
//TC-O(n)

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

void middleelement(Node* head){
    Node* slowptr= head;
    Node* fastptr= head;
    while(fastptr!=NULL && fastptr->next!=NULL){
        slowptr=slowptr->next;
        fastptr=fastptr->next->next;
    }
    cout<<slowptr->data<<endl;
}

int main(){
    Linkedlist ll1;
    ll1.insertatend(1);
    ll1.insertatend(2);
    ll1.insertatend(3);
    ll1.insertatend(4);
    ll1.insertatend(5);
    ll1.insertatend(6);
    ll1.display();
    middleelement(ll1.head);
 
}