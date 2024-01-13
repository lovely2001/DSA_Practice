//Given the age of a person, write a function to check if the person is eligible to vote or not.

#include<iostream>
using namespace std;

bool eligibletovoteornot(int age){
    if(age>=18){
        return true;
    }else{
        return false;
    }
}

int main(){
    int age;
    cin>>age;

    cout<<eligibletovoteornot(age)<<endl;
}