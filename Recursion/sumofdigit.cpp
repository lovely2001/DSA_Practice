#include<iostream>
using namespace std;

int f(int n){
    if(n>=0 && n<=9){
        return n;
    }

    return f(n/10)+n%10;
}

int main(){
    cout<<f(653);
    return 0;
}