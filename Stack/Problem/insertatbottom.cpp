#include<iostream>
#include<stack>
using namespace std;

void insertatbottom(stack<int>&input,int val){
    stack<int>temp;
    while(not input.empty()){
        int curr = input.top();
        input.pop();
        temp.push(curr);
    }
    temp.push(val);

    while(not temp.empty()){
        int curr = temp.top();
        temp.pop();
        input.push(curr);
    }
}

void f(stack<int> &input,int x){
    if(input.empty()){
        input.push(x);
        return;
    }
    int curr = input.top();
    input.pop();
    f(input,x);
    input.push(curr);
}

int main(){
    stack<int> st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);

    //insertatbottom(st,9);
    f(st,12); 
    while(not st.empty()){
        int curr=st.top();
        st.pop();
        cout<<curr<<endl;
    }


    
}