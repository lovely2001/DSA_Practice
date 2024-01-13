#include<iostream>
using namespace std;

int main(){
    int number;
    cout<<"Enter the number : "<<endl;
    cin>>number;

    if((number%5==0) || (number%3==0)){
        cout<<number<<endl;
    }
    else{
        cout<<"Enter the valid number"<<endl;
    }
}