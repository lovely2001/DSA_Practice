// Write a program to find the sum of all the elements of an array. Use pointers to traverse the array.
// The first line of the input contains the size of the array.
// The second line of input contains the elements of the array.

#include<iostream>
using namespace std;

int main(){
    int n=3;
    int arr[n]={1,2,3};
    
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=*(arr+i);
    }

    cout<<sum<<endl;

    int *ptr =  arr;
    int sum1=0;
    for(int i=0;i<n;i++){
        sum1+=*(ptr+i);
    }

    cout<<sum1<<endl;
}