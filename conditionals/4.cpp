//Write a program to print positive number entered by the user, if user enters a negative number, it is skipped.

#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int number;
    cout<<"Enter the number: "<<endl;
    cin>>number;
    
    if(number>0){
        cout<<number<<endl;
    }else{
        cout<<"The number is negative and skipped"<<endl;
    }
}