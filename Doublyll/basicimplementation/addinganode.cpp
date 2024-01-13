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

    void insertatstart(int val){
        Node* newnode=new Node(val);
        if(head==NULL){
            head=newnode;
            tail=newnode;
            return;
        }
        newnode->next=head;
        head->prev=newnode;
        head=newnode;
    }

    void insertatend(int val){
        Node* newnode = new Node(val);
        if(tail==NULL){
            head=newnode;
            tail=newnode;
            return;
        }
        tail->next=newnode;
        newnode->prev=tail;
        tail=newnode;
    }

    void insertatk(int val,int k){
        Node* newnode=new Node(val);
        int count=1;
        Node* temp = head;
        while(count<(k-1)){
            temp=temp->next;
            count++;
        }
        newnode->next=temp->next;
        temp->next=newnode;
        newnode->prev=temp;
        temp->next->prev=newnode;
    }

    void display(){
        Node* temp=head;
        while(temp!=NULL){
            cout<<temp->data<<" ";
            temp=temp->next;
        }
        cout<<endl;
    }

};

int main(){
    Node* newnode = new Node(3);
    doublylinkedlist dll;
    // dll.insertatstart(1);
    // dll.display();
    // dll.insertatstart(2);
    // dll.display();
    // dll.insertatstart(3);
    // dll.display();
    dll.insertatend(1);
    dll.display();
    dll.insertatend(2);
    dll.display();
    dll.insertatend(3);
    dll.display();
    dll.insertatk(10,2);
    dll.display();

}