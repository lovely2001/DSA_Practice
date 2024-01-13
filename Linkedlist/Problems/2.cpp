//Delete duplicate element from sorted ll

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

void deleetduplicatedfromll(Node* head) {
    Node* currnode = head;
    while (currnode && currnode->next) {
        while (currnode->next && currnode->data == currnode->next->data) {
            Node* deletenode = currnode->next;
            currnode->next = currnode->next->next;
            free(deletenode);
        }
        currnode = currnode->next;
    }
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
    deleetduplicatedfromll(ll.head);
    ll.display();
}