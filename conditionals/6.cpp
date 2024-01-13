//Write a program to calculate marks to grades . Follow the conversion rule as given below :

#include<iostream>
using namespace std;

int main(){
    int marks;
    cout<<"Enter the marks : "<<endl;
    cin>>marks;

    if(marks>90){
        cout<<"A+"<<endl;
    }
    else if(marks>80){
        cout<<"A+"<<endl;
    }
    else if(marks>70){
        cout<<"B+"<<endl;
    }
    else if(marks>60){
        cout<<"B"<<endl;
    }
    else if(marks>50){
        cout<<"C"<<endl;
    }
    else if(marks>40){
        cout<<"D"<<endl;
    }
    else if(marks>30){
        cout<<"E"<<endl;
    }
    else if(marks>=0){
        cout<<"E"<<endl;
    }
    else{
        cout<<"Enter the valid marks"<<endl;
    }
}