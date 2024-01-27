#include<iostream>
using namespace std;

class stack{
    int *arr;
    int capacity;
    int top;

    public:
    stack(int c){
        this->capacity = c;
        arr = new int[c];
        this->top = -1;
    }

    void push(int data){
        if(this->top == this->capacity-1){
            cout<<"OVERFLOW"<<endl;
        }
        this->top++;
        this->arr[this->top]=data;
    }

    void pop(){
        if(this->top==-1){
            cout<<"UNDERFLOW"<<endl;
        }
        this->top--;
    }
int gettop(){
    if(this->top == -1){
        cout<<"Underflow"<<endl;
        return INT16_MIN;
    }
    return this->arr[this->top];
}
int size(){
    return this->top+1;
}
bool isempty(){
    return this->top==-1;
}
bool isfull(){
    return this->top==this->capacity-1;
}

};


int main(){
    stack st(5);
    st.push(1);
    st.push(2);
    st.push(3);
    cout<<st.gettop()<<endl;
    st.push(4);
    st.push(5);
    cout<<st.gettop()<<endl;
    st.push(6);
}