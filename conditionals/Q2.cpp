#include<iostream>
using namespace std;

int main(){
    int age;
    cout<<"Enter the age : "<<endl;
    cin>>age;

    if(age<12){
        cout<<"child"<<endl;
    }
    else if(age<18){
        cout<<"Teenager"<<endl;
    }
    else{
        cout<<"Adult"<<endl;
    }
}