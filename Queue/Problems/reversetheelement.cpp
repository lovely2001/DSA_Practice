#include<iostream>
#include<stack>
#include<queue>
using namespace std;
int main(){
    queue<int> input;
    input.push(1);
    input.push(2);
    input.push(3);
    input.push(4);
    stack<int> st;
    while(not input.empty()){
        st.push(input.front());
        input.pop();
    }

    while(not st.empty()){
        input.push(st.top());
        st.pop();
    }

    while(not input.empty()){
        cout<<input.front()<<" ";
        input.pop();
    }
}