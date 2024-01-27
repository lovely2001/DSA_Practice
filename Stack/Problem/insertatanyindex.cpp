#include<iostream>
#include<stack>
using namespace std;

void insertatindex(stack<int> &st,int val,int pos){
    stack<int> temp;
    int size = st.size();
    int i=1;
    while(i<=(size-pos)){
        int curr=st.top();
        st.pop();
        temp.push(curr);
        i++;
    }
    st.push(val);
    while(not temp.empty()){
        int curr=temp.top();
        temp.pop();
        st.push(curr);
    }
}

int main(){
    stack<int> st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);
    int val=12;
    int pos=1;
    insertatindex(st,val,pos);

    while(not st.empty()){
        int curr=st.top();
        st.pop();
        cout<<curr<<endl;
    }


}