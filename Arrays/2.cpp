//Given an integer array and its size, find the sum of the greatest and the smallest integer present in the array. Here 1< size <101

#include<iostream>
using namespace std;

int main(){
    int arr[]={1,2,3,4,5};
    int size=5;

    int greatest_number=arr[0];
    int smallest_number=arr[0];

    for(int i=0;i<size;i++){
        if(arr[i]>greatest_number){
            greatest_number = arr[i];
        }else{
            smallest_number = arr[i];
        }
    }

    cout<<"sum of the greatest and the smallest integer is : "<<greatest_number+smallest_number<<endl;
}