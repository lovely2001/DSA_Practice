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

void insertatstart(Node* &head, int val){
    Node* newnode = new Node(val);
    newnode->next=head;
    head = newnode;
}

void insertatend(Node* head, int val){
    Node* newnode = new Node(val);
    Node* temp = head;
    while(temp->next != NULL){
        temp = temp->next;
    }
    temp->next = newnode;
}
 
void insertatk(Node* head, int val,int pos){
    int curr_pos=0;
    Node* temp=head;
    Node* newnode = new Node(val);
    while(curr_pos != pos-1){
        curr_pos++;
        temp=temp->next;
    }
    newnode->next=temp->next;
    temp->next=newnode;
}

void deleteatstart(Node * &head){
    Node* temp = head;
    head =  head->next;
    free(temp);
}

void deleteatend(Node* head){
    Node* temp = head;
    while(temp->next->next != NULL){
        temp=temp->next;
    }
    Node * deletenode = temp->next;
    temp->next = NULL;
    free(deletenode);
}

void deleteatk(Node * head,int pos){
    if(pos==0){
        deleteatstart(head);
        return;
    }
    int curr_pos = 0;
    Node* temp = head;
    while(curr_pos != pos-1){
        temp=temp->next;
        curr_pos++;
    }
    Node * deletenode = temp->next;
    temp->next = temp->next->next;
    free(deletenode);
}
void display(Node* head){
    Node* temp = head;
    while(temp != NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
}

int main(){
    Node* head = NULL;
    insertatstart(head,1);
    display(head);
    insertatstart(head,2);
    display(head);
    insertatend(head,3);
    display(head);
    insertatend(head,4);
    display(head);
    insertatk(head,10,2);
    display(head);
    // deleteatstart(head);
    // display(head);
    deleteatend(head);
    display(head);
    deleteatk(head,2);
    display(head);
}