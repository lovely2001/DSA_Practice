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

    void display(){
        Node* temp=head;
        while(temp!=NULL){
            cout<<temp->data<<" ";
            temp=temp->next;
        }
        cout<<endl;
    }

    void deletesameneighbournode(){
        Node* currnode = tail->prev;
        while(currnode!=head){
            Node* prevptr=currnode->prev;
            Node* nextptr=currnode->next;
            if(prevptr->data == currnode->data){
                prevptr->next=nextptr;
                nextptr->prev=prevptr;
                free(currnode);
            }
            currnode=prevptr;
        }
    }

};

int main(){
    doublylinkedlist dll;
    dll.insertatend(2);
    dll.display();
    dll.insertatend(1);
    dll.display();
    dll.insertatend(2);
    dll.display();
    dll.insertatend(1);
    dll.display();
    dll.deletesameneighbournode();
    dll.display();
   
}