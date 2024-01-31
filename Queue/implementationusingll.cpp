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

class queue{
    Node* head;
    Node* tail;
    int size=0;
    public:
    queue(){
        head=NULL;
        tail=NULL;
    }

    void enque(int val){
        Node* newnode = new Node(val);
        if(head==NULL){
            head=tail=newnode;
        }else{
            tail->next=newnode;
            tail=newnode;
        } 
        size++;
    }

    void deque(){
        if(head==NULL){
            return;
        }
        Node* newhead=head->next;
        Node* oldhead=head;
        head=newhead;
        if(head==NULL) tail=NULL;
        oldhead->next=NULL;
        delete oldhead;
    }

    int getsize(){
        return size;
    }

    bool isempty(){
        return head==NULL;
    }

    int front(){
        if(head==NULL){
            return -1;
        }else{
            return head->data;
        }
    }
};

int main(){
    queue q;
    q.enque(1);
    q.enque(2);
    q.enque(3);
    q.enque(4);
    q.deque();
    while(not q.isempty()){
        cout<<q.front()<<" ";
        q.deque();
    }cout<<endl;
}