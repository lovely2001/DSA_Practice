#include<iostream>
using namespace std;

int fibonacci(int num){
    if(num==0 || num==1){
        return num;
    }
    return fibonacci(num-1)+fibonacci(num-2);
}

int main(){
    int result = fibonacci(5);
    cout<<result<<endl;
}