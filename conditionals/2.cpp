//Write a program to print absolute value of a number entered by the user.

#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int number;
    cout<<"Enter the number: "<<endl;
    cin>>number;
    
    if(number<0){
        cout<<"Absolute value of a number is : "<<abs(number)<<endl;
    }else{
        cout<<number<<endl;
    }
}