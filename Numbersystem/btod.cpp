#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int number_in_decimal=0;
    int i=0;
    while(n>0){
        int digit=n%10;
        digit*=pow(2,i);
        number_in_decimal+=(digit);
        n/=10;
        i++;
    }

    cout<<number_in_decimal<<endl;
}