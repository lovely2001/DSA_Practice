//Write a program which takes the values of length and breadth from user and check if it is a square or not.
#include<iostream>
using namespace std;

int main(){
    int length;
    int breadth;
    cout<<"Enter the value of Length of rectangle : "<<endl;
    cin>>length;
    cout<<"Enter the value of Breadth of rectangle : "<<endl;
    cin>>breadth;

    if(length==breadth){
        cout<<"It is a square"<<endl;
    }else{
        cout<<"It is a rectangle"<<endl;
    }

    
}