//Given two numbers a and b, write a program to print all the prime numbers present between a and b.


#include<iostream>
using namespace std;
    
bool isprime(int num){
    for(int i=2;i<num;i++){
        if(num%i==0){
            return false;
        }
    }
    return true;
}


int main(){
    int a,b;
    cin>>a;
    cin>>b;

    for(int num=a;num<=b;num++){
        if(isprime(num)){
            cout<<num<<endl;
        }
    }
}