//merge 2 sorted ll

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

Node* mereg2ll(Node* head1, Node* head2){
    Node* dummynode = new Node(-1);
    Node* ptr1=head1;
    Node* ptr2=head2;
    Node* ptr3=dummynode;

    while(ptr1 && ptr2){
        if(ptr1->data < ptr2->data){
            ptr3->next=ptr1;
            ptr1=ptr1->next;
            ptr3=ptr3->next;
        }else{
            ptr3->next=ptr2;
            ptr2=ptr2->next;
            ptr3=ptr3->next;
        }
    }

    if(ptr1){
        ptr3->next=ptr1;
    }
    if(ptr2){
        ptr3->next=ptr2;
    }

    return dummynode->next;
}

int main(){
    Linkedlist ll1;
    Linkedlist ll2;
    ll1.insertatend(1);
    ll1.insertatend(2);
    ll1.insertatend(4);
    ll1.display();

    ll2.insertatend(3);
    ll2.insertatend(5);   
    ll2.display();

    Linkedlist ll3;
    ll3.head = mereg2ll(ll1.head,ll2.head);
    ll3.display();


}