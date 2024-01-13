// Write a program to print the kth element of an array using pointers.
// The first line of the input contains the size of the array and the value of k.
// The second line of input contains the elements of the array. You can assume that 0 <= k < size
// of the array.

#include<iostream>
using namespace std;

int main(){
    int n=7;
    int a[n]={1,2,3,4,5,6,7};
    int k;
    cin>>k;

    cout<<*(a+k-1)<<endl;
}