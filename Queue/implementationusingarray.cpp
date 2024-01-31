#include<iostream>
#include<vector>
using namespace std;

class queue{
    vector<int> v;
    int front;
    int back;

    public:
    queue(){
        front=-1;
        back=-1;
    }

    void enque(int data){
        if(back == 0){
            front=0;
        }
        v.push_back(data);
        back++;
    }

    void deque(){
        if(front==back){
            front=-1;
            back=-1;
            v.clear();
        }else front++;
    }

    int getfront(){
        if(front == -1) return -1;
        return v[front];
    }

    bool isempty(){
        return front==-1;
    }
};

int main(){
    queue q;
    q.enque(1);
    q.enque(2);
    q.enque(3);
    q.enque(4);
    q.deque();
    q.enque(5);
    q.enque(6);
    q.enque(7);
    q.enque(8);

    while(not q.isempty()){
        cout<<q.getfront()<<" ";
        q.deque();
    }cout<<endl;
}