#include<iostream>
#include<vector>
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
};

vector<int> checkforsum(Node* head,Node* tail,int x){
    vector<int> ans(2,-1);
    while(head!=tail){
        int sum=head->data+tail->data;
        if(sum==x){
            ans[0]=head->data;
            ans[1]=tail->data;
            break;
        }else if(sum>x){
            tail=tail->prev;
        }else{
            head=head->next;
        }
    }
    return ans;
}

int main(){
    Node* newnode = new Node(3);
    doublylinkedlist dll;
    dll.insertatend(2);
    dll.display();
    dll.insertatend(5);
    dll.display();
    dll.insertatend(6);
    dll.display();
    dll.insertatend(8);
    dll.display();
    dll.insertatend(10);
    dll.display();
    vector<int>ans = checkforsum(dll.head,dll.tail,4);
    cout<<ans[0]<<" "<<ans[1]<<endl;
}