//Write a program to take the values of two variables a and b from the keyboard and then check if both the conditions 'a < 50' and 'a < b' are true.

#include<iostream>
using namespace std;

int main(){
    int a;
    int b;
    cout<<"Enter the value of a : "<<endl;
    cin>>a;
    cout<<"Enter the value of b : "<<endl;
    cin>>b;
    
    bool ans = ((a<50) && (a<b));
    cout<<ans<<endl;
    cout<<((a<50) && (a<b))?1:0;
   
}