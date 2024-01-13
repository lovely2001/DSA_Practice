//Write a program to take input from user for Cost Price (C.P.) and Selling Price(S.P.) and calculate Profit or Loss.

#include<iostream>
using namespace std;

int main(){
    int cp,sp;
    cout<<"Enter the cost price of an item : "<<endl;
    cin>>cp;
    cout<<"Enter the selling price of an item : "<<endl;
    cin>>sp;
    if(cp>sp){
        cout<<"Loss is : "<<cp-sp<<endl;
    }else{
        cout<<"profit is : "<<sp-cp<<endl;
    }

}