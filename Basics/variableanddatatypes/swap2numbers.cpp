#include<iostream>
using namespace std;

int main(){
    int num1;
    int num2;
    cout<<"Enter the value of num1 : "<<endl;
    cin>>num1;
    cout<<"Enter the value of num2 : "<<endl;
    cin>>num2;

    cout<<"Number before swapping is : "<<"num1 -> "<<num1<<", num2 -> "<<num2 <<endl;
    int temp;
    temp=num1;
    num1=num2;
    num2=temp;
    cout<<"Number after swapping is : "<<"num1 -> "<<num1<<", num2 -> "<<num2 <<endl;
    
}