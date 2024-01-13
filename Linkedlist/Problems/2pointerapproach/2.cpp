//Given the head of 2 ll, return the node at which the 2 list intersects, if the 2 ll have no intersection at all, return null.
//hints - 1. find the length of both the ll,
//2. move the pointer of longer list by (length of longer ll - length of shorter ll)

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

int getlength(Node* head){
    int length=0;
    while(head){
        length++;
        head=head->next;
    }
    return length;
}

Node* shiftheadbyk(Node* &head,int k){
    while(k--){
        head=head->next;
    }
    return head;
}

Node* getintersection(Node* head1, Node* head2){
    int l1 = getlength(head1);
    int l2 = getlength(head2);

    Node* ptr1;
    Node* ptr2;

    if(l1>l2){
        int k=l1-l2;
        ptr1 = shiftheadbyk(head1,k);
        ptr2=head2;
    }
    else{
        int k=l2-l1;
        ptr1=head1;
        ptr2= shiftheadbyk(head2,k);
    }

    while(ptr1){
        if(ptr1==ptr2){
            return ptr1;
        }
        ptr1=ptr1->next;
        ptr2=ptr2->next;
    }
    return NULL;
}

int main(){
    Linkedlist ll1;
    Linkedlist ll2;
    ll1.insertatend(1);
    ll1.insertatend(2);
    ll1.insertatend(3);
    ll1.insertatend(4);
    ll1.insertatend(5);

    ll2.insertatend(6);
    ll2.insertatend(7);
    ll2.head->next->next = ll1.head->next->next;

    ll1.display();
    ll2.display();

    Node* interscetion = getintersection(ll1.head,ll2.head);
    if(interscetion){
        cout<<interscetion->data;
    }else{
        cout<<"Null";
    }
}