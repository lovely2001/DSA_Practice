//Write a program to print all Armstrong numbers between 100 to 500.
#include<iostream>
#include<math.h>
using namespace std;

int main(){
    for(int num=100;num<=500;num++){
        int armstrongnumber=0;
        int temp=num;
        while(temp>0){
            int digit = temp%10;
            armstrongnumber += (digit*digit*digit);
            temp /= 10;
        }
        if (armstrongnumber == num) {
            cout << num << " is an Armstrong number." << endl;
        }

    }
}