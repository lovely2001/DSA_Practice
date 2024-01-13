//Create a calculator using switch statement to perform addition, subtraction, multiplication and division.

#include<iostream>
using namespace std;

int main(){
    int num1;
    int num2;
    cout<<"Enter the value of num1 : "<<endl;
    cin>>num1;
    cout<<"Enter the value of num2 : "<<endl;
    cin>>num2;
     
    char operators;
    cout<<"Enter the operator : "<<endl;
    cin>>operators;

    switch(operators){
        case '+':
        cout<<"Addition of 2 number is : "<<num1+num2<<endl;
        break;

        case '-':
        cout<<"Subtraction of 2 number is : "<<num1-num2<<endl;
        break;

        case '*':
        cout<<"Multiplication of 2 number is : "<<num1*num2<<endl;
        break;

        case '/':
        cout<<"Division of 2 number is : "<<num1/num2<<endl;
        break;
    }
    
    
    
    
    
}