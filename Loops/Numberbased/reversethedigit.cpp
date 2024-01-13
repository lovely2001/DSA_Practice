#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int reverse_ofnumber=0;

    while(n>0){
        reverse_ofnumber = (reverse_ofnumber*10) + (n%10);
        n/=10;
    }
    cout<<reverse_ofnumber<<endl;
}