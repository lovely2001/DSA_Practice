#include<iostream>
#include<stack>
using namespace std;

class queue{
    stack<int> st;
    public:
    queue(){}

    void push(int x){
        st.push(x);
    }

    void pop(){
        stack<int> temp;

        while(st.size()>1){
            temp.push(st.top());
            st.pop();
        }
        st.pop();
        while(not temp.empty()){
            st.push(temp.top());
            temp.pop();
        }
    }

    bool isempty(){
        return st.empty();
    }

    int front(){
        stack<int> temp;
        while(st.size()>1){
            temp.push(st.top());
            st.pop();
        }
        int result=st.top();
        while(not temp.empty()){
            st.push(temp.top());
            temp.pop();
        }
        return result;
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