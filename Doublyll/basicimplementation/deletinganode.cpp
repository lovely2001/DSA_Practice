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

    void deletefromstart(){
        if(head==NULL){
            return;
        }
        Node* temp = head;
        head=head->next;
        if(head==NULL){
            tail=NULL;
        }
        else{
            head->prev=NULL;
        }
        free(temp);
    }

    void deletefromend(){
        if(head==NULL){
            return;
        }
        Node* temp=tail;
        tail=tail->prev;
        if(tail==NULL){
            head=NULL;
        }else{
            tail->next=NULL;
        }
        free(temp);
    }

    void deletefromk(int k){
        Node* temp = head;
        int count=1;
        while(count<k){
            temp=temp->next;
            count++;
        }
        temp->prev->next=temp->next;
        temp->next->prev=temp->prev;
        free(temp);
    }

};

int main(){
    Node* newnode = new Node(3);
    doublylinkedlist dll;
    dll.insertatend(1);
    dll.display();
    dll.insertatend(2);
    dll.display();
    dll.insertatend(3);
    dll.display();
    dll.insertatend(4);
    dll.display();
    dll.insertatend(5);
    dll.display();
    // dll.deletefromstart();
    // dll.display();
    // dll.deletefromend();
    // dll.display();
    dll.deletefromk(3);
    dll.display();

}