#include<iostream>
using namespace std;

int main(){
    int a;
    cin>>a;

    int b;
    cin>>b;

    int result=1;
    for(int i=1;i<=b;i++){
        result*=a;
    }
    cout<<result;
}