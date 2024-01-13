//- Given two numbers a and b, write a program using functions to print all the odd numbers between them.

#include<iostream>
using namespace std;
    
void printalloddnumbers(int a,int b){
    for(int i=a;i<=b;i++){
        if(i%2 != 0){
            cout<<i<<endl;
        }
    }
}


int main(){
    int a,b;
    cin>>a;
    cin>>b;

    printalloddnumbers(a,b);
}