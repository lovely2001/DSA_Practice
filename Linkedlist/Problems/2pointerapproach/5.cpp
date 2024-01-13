//merging multiple linkedlist

#include<iostream>
#include<vector>
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
        }else{
            ptr3->next=ptr2;
            ptr2=ptr2->next;
        }
        ptr3=ptr3->next; // Move ptr3 to the last node
    }

    if(ptr1){
        ptr3->next=ptr1;
    }
    if(ptr2){
        ptr3->next=ptr2;
    }

    return dummynode->next;
}

Node* mergekll(vector<Node*> &lists){

    if(lists.size()==0){
        return NULL;
    }
    while(lists.size()>1){
        Node * mergehead = mereg2ll(lists[0],lists[1]);
        lists.push_back(mergehead);
        lists.erase(lists.begin());
        lists.erase(lists.begin());
    }
    return lists[0];
}


int main(){
    Linkedlist ll1;
    Linkedlist ll2;
    Linkedlist ll3;

    ll1.insertatend(1);
    ll1.insertatend(2);
    ll1.insertatend(4);
    ll1.display();

    ll2.insertatend(3);
    ll2.insertatend(6);   
    ll2.insertatend(8); 
    ll2.display();

    ll3.insertatend(5);
    ll3.insertatend(7);
    ll3.insertatend(9);
    ll3.display();

    vector<Node *> listss;
    listss.push_back(ll1.head);
    listss.push_back(ll2.head);
    listss.push_back(ll3.head);
    
    Linkedlist mergedlist;
    mergedlist.head = mergekll(listss);
    mergedlist.display();
}