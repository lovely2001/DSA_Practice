//Given an integer array(arr) and its size(n), print the count of odd and even integers present in the array.

#include<iostream>
using namespace std;

int main(){
    int arr[]={1,2,3,4,5};
    int size=5;

    int count_evennumber=0;
    int count_oddnumber=0;

    for(int i=0;i<size;i++){
        if(arr[i]%2==0){
            count_evennumber++;
        }else{
            count_oddnumber++;
        }
    }

    cout<<"Number of even elements : "<<count_evennumber<<endl;
    cout<<"Number of odd elements : "<<count_oddnumber<<endl;

}