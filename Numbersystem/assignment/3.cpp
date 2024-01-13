//Given two binary numbers, return the greatest of these numbers in decimal format. 

#include<iostream>
#include<math.h>
using namespace std;

int binary_todecimal(int n){
    int number_in_decimal=0;
    int i=0;
    while(n>0){
        int digit=n%10;
        digit*=pow(2,i);
        number_in_decimal+=(digit);
        n/=10;
        i++;
    }
    return number_in_decimal;
}
int main(){
    int n1;
    cin>>n1;
    int n2;
    cin>>n2;
     
    int num1 = binary_todecimal(n1);
    cout<<num1<<endl;
    int num2 = binary_todecimal(n2);
    cout<<num2<<endl;

    (num1>num2)?cout<<num1:cout<<num2;
    
}