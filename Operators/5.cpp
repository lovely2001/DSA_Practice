//Write a program to calculate the sum of digits of a 3 digit number.

#include<iostream>
using namespace std;

int main(){
    int number;
    cout<<"Enter the 3 digit number : "<<endl;
    cin>>number;

    int sum=0;
    while(number>0){
        sum += (number%10);
        number/=10;
    }

    cout<<sum<<endl;
}