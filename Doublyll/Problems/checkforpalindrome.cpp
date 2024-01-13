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

    bool checkpalindrome(){
        while(head!=tail && tail!=head->prev){
            if(head->data != tail->data){
                return false;
            }
            head=head->next;
            tail=tail->prev;
        }
        return true;
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
    dll.insertatend(2);
    dll.display();
    dll.insertatend(1);
    dll.display();
    cout<<dll.checkpalindrome();
}