// Remove kth node from the end

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

void removeknode(Node*& head, int k){
    Node* ptr1=head;
    Node* ptr2=head;

    int count=k;
    while(count--){
        if(ptr2==NULL) // Handle the case when k is greater than the length of the linked list
        {
            cout << "Invalid value of k." << endl;
            return;
        }
        ptr2=ptr2->next;
    }

    if(ptr2==NULL){
        //delete head node
        Node* temp=head;
        head=head->next;
        free(temp);
        return;
    }

    while(ptr2->next!=NULL){
        ptr1=ptr1->next;
        ptr2=ptr2->next;
    }
    Node* temp=ptr1->next;
    ptr1->next=ptr1->next->next;
    free(temp);
}

int main(){
    Linkedlist ll;
    ll.insertatend(1);
    ll.insertatend(2);
    ll.insertatend(3);
    ll.insertatend(4);
    ll.insertatend(5);
    ll.insertatend(6);
    ll.display();
    removeknode(ll.head,6);
    ll.display();

    return 0;
}
