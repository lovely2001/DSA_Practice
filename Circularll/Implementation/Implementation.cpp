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

class circularll{
    public:
    Node* head;
    circularll(){
        head=NULL;
    }

    void insertatstart(int val){
        Node* new_node = new Node(val);
        if(head==NULL){
            head=new_node;
            new_node->next=head;
        }
        Node* tail=head;
        while(tail->next!=head){
            tail=tail->next;
        }
        tail->next=new_node;
        new_node->next=head;
        head=new_node;
    }

    void insertatend(int val){
        Node* new_node = new Node(val);
        if(head==NULL){
            head=new_node;
            new_node->next=head;
        }
        Node* tail=head;
        while(tail->next!=head){
            tail=tail->next;
        }
        tail->next=new_node;
        new_node->next=head;
    }

    void deleteatstart(){
        if(head==NULL){
            return;
        }
        Node* tail=head;
        while(tail->next!=head){
            tail=tail->next;
        }
        Node* temp = head;
        head=head->next;
        tail->next=head;
        free(temp);
    }

    void deleteatend(){
        if(head==NULL){
            return;
        }
        Node* tail=head;
        while(tail->next->next!=head){
            tail=tail->next;
        }
        Node* temp = tail->next;
        tail->next=head;
        free(temp);
    }

    void display(){
        Node* temp = head;
        do{
            cout<<temp->data<<" ";
            temp=temp->next;
        }while(temp!=head);
        cout<<endl;
    }
};


int main(){
    circularll c1;
    c1.insertatstart(1);
    c1.display();
    c1.insertatstart(2);
    c1.display();
    c1.insertatstart(3);
    c1.display();
    c1.insertatend(4);
    c1.display();
    c1.insertatend(5);
    c1.display();
    c1.insertatend(6);
    c1.display();
    c1.deleteatstart();
    c1.display();
    c1.deleteatend();
    c1.display();
}