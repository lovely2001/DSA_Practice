// Write a program to traverse the array in the reverse order using pointers.
// The first line of the input contains the size of the array.
// The second line of input contains the elements of the array.

#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    cout<<"Enter the elements of an array : "<<endl;
    int arr[n];
    int *ptr=arr;
    for(int i=0;i<n;i++){
        cin>>*ptr;
        ptr++;
    }
    
    int *ptrt=arr;
    for(int i=(n-1);i>=0;i--){
        cout<<*(ptrt+i)<<endl;
    }
}