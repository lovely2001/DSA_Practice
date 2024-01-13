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

bool is_critical_point(Node *node)
{
    if (node->next->data > node->data && node->prev->data > node->data)
        return true;
    return node->next->data < node->data && node->prev->data < node->data;
}
 
vector<int> find_max_min(Node *head)
{
    vector<int> ans(2, 2e9);
    int first = -1, last = -1;
    Node *tail = head;
    while (tail->next != NULL)
    {
        tail = tail->next;
    }
    Node *curr = tail->prev;
    if (curr == NULL)
        return {-1, -1};
    int pos = 0;
    while (curr != head)
    {
        if (is_critical_point(curr))
        {
            if (first != -1)
            {
                ans[0] = min(ans[0], pos - last);
                ans[1] = pos - first;
                last = pos;
            }
            else
            {
                first = last = pos;
            }
        }
        pos++;
        curr = curr->prev;
    }
    if (ans[0] == 2e9)
    {
        ans[0] = ans[1] = -1;
    }
    return ans;
}

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
    dll.insertatend(4);
    dll.display();
    dll.insertatend(6);
    vector<int> ans = find_max_min(dll.head);
    cout<<ans[0]<<" "<<ans[1]<<endl;
}