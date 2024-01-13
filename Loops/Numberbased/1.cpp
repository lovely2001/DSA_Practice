#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int no_of_digit=0;

    while(n>0){
        no_of_digit++;
        n/=10;
    }
    cout<<no_of_digit<<endl;
}