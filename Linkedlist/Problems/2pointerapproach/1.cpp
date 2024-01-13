//Given 2 ll, tell if they are equal or not. two ll are equal if they have same data and the arrangement of data is also same.

// hints - 1. check if the length is same and 
//         2. check if the nodes have equal values

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

bool lleequalornot(Node* head1, Node* head2){
    Node* ptr1 = head1;
    Node* ptr2 = head2;
    while(ptr1!=NULL && ptr2!=NULL){
        if(ptr1->data != ptr2->data){
            return false;
        }
        ptr1=ptr1->next;
        ptr2=ptr2->next;
    }
    return (ptr1 == NULL && ptr2==NULL);
}

int main(){
    Linkedlist ll1;
    Linkedlist ll2;
    ll1.insertatend(1);
    ll1.insertatend(2);
    ll1.insertatend(3);
    ll2.insertatend(1);
    ll2.insertatend(2);
    ll2.insertatend(3);
    ll2.insertatend(4);
    ll1.display();
    ll2.display();
    cout<<lleequalornot(ll1.head,ll2.head);
}