//- Write a function to print squares of the first 5 natural numbers.

#include<iostream>
using namespace std;

int squareofnumber(int num){
    return num*num;
}

int main(){

    for(int num=1;num<=5;num++){
        cout<<squareofnumber(num)<<endl;
    }
}