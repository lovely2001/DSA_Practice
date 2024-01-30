#include<iostream>
#include<stack>
using namespace std;

bool isvalid(string str){
    stack<char> st;
    for(int i=0;i<str.size();i++){
        char ch = str[i];
        if(ch == '[' || ch =='(' || ch == '{'){
            st.push(ch);
        }else{
            if(ch==']' and st.size()>0 and st.top()=='['){
                st.pop();
            }else if(ch==')' and st.size()>0 and st.top()=='('){
                st.pop();
            }else if(ch=='}' and st.size()>0 and st.top()=='{'){
                st.pop();
            }else{
                return false;
            }
        }
    }
    return st.empty();
}

int main(){
    string str= "(())}";
    cout<<isvalid(str)<<endl;
}