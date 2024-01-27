#include<iostream>
using namespace std;

class node {
public:
    int data;
    node* next;
    node(int d) {
        data = d;
        next = NULL;
    }
};

class stack {
    node* head;
    int capacity;
    int currsize;
public:
    stack(int c) {
        capacity = c;
        currsize = 0;
        head = NULL;
    }

    bool isempty() {
        return head == NULL;
    }

    bool isfull() {
        return currsize == capacity;
    }

    void push(int data) {
        node* newnode = new node(data);
        newnode->next = head;
        head = newnode;
        currsize++;
    }

    int pop() {
        if (head == NULL) {
            cout << "underflow \n";
            return INT16_MIN;
        }
        node* newhead = head->next;
        head->next = NULL;
        node* toberemoved = head;
        int result = toberemoved->data;
        delete toberemoved;
        head = newhead;
        currsize--;
        return result;
    }

    int size() {
        return currsize;
    }

    int gettop() {
        if (head == NULL) {
            cout << "underflow \n";
            return INT16_MIN;
        }
        return head->data;
    }
};

int main() {
    stack st(5);
    st.push(1);
    st.push(2);
    st.push(3);
    cout << "Top element: " << st.gettop() << endl;
    st.push(4);
    st.gettop();
}
