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

void insertAthead(Node* &head, int val){
    Node* new_node = new Node(val);
    new_node->next = head;
    head = new_node;
}

void insertAttail(Node* head, int val){
    if(head == NULL){
        insertAthead(head, val);
        return;
    }
    Node* new_node = new Node(val);
    Node* temp = head;
    while(temp->next != NULL){
        temp = temp->next;
    }
    temp->next = new_node;
}

void updateatK(Node * head,int value,int k){
    Node * temp = head;
    int curr_pos = 0;
    while(curr_pos != k){
        temp=temp->next;
        curr_pos++;
    }
    temp->data = value;
}
void display(Node* head){
    Node* temp = head;
    while(temp != NULL){
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}

int main(){
    Node* head = NULL;
    insertAthead(head, 1);
    display(head);
    insertAthead(head, 2);
    display(head);
    insertAttail(head, 3);
    display(head);
    insertAttail(head, 4);
    display(head);
    updateatK(head,20,1);
    display(head);

    return 0;
}
