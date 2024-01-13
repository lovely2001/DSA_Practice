//Write a program to calculate the sum of the first and the second last digit of a 5 digit number.

#include<iostream>
using namespace std;

int main(){
    int number;
    cout<<"Enter the 5 digit number : "<<endl;
    cin>>number;

    int sum=0;
    for(int i=0;i<5;i++){
        if((i==1 || i==4)){
            sum+=(number%10);
        }
        number/=10;
        
    }

    cout<<sum<<endl;
}