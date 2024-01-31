#include<iostream>
#include<stack>
using namespace std;

class queue{
    stack<int> st;
    public:
    queue(){}

    void push(int x){
        stack<int> temp;
        while(not st.empty()){
            temp.push(st.top());
            st.pop();
        }
        st.push(x);
        while(not temp.empty()){
            st.push(temp.top());
            temp.pop();
        }
        
    }

    void pop(){
        if(st.empty()) return;
        st.pop();
    }

    bool isempty(){
        return st.empty();
    }

    int front(){
        if(st.empty()) return -1;
        return st.top();
    }
};

int main(){
    queue q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.pop();

    while(not q.isempty()){
        cout<<q.front()<<" ";
        q.pop();
    }
}