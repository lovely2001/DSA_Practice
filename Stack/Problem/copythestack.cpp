//Question - copy the data from one stack to another in the same order
//whenever we transfer data from 1 stack to another it get reversed
//logic1: mainsteack->tempstack->resultstack
//logic2: using recursion

#include<iostream>
#include<stack>
using namespace std;

stack<int> copstack(stack<int> &input){
    stack<int> temp;
    while(not input.empty()){
        int curr = input.top();
        input.pop();
        temp.push(curr);
    }

    stack<int> res;
    while(not temp.empty()){
        int curr=temp.top();
        temp.pop();
        res.push(curr);
    }

    return res;
}

void f(stack<int> &input,stack<int>&result){
    if(input.empty()) return;
    int curr = input.top();
    input.pop();
    f(input,result);
    result.push(curr);
}

int main(){
    stack<int> st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);

    //stack<int> copystack = copstack(st);
    stack<int> copystack;
    f(st,copystack);
    while(not copystack.empty()){
        int curr = copystack.top();
        copystack.pop();
        cout<<curr<<endl;
    }
}


