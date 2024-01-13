//Given two vectors arr1[] and arr2[] of size m and n sorted in increasing order. Merge the
//two arrays into a single sorted array of size m+n.

#include<iostream>
using namespace std;

int main(){
    //Input:
    int arr1[] = {1,3,5};
    int arr2[] = {2,4,6};
    int m = sizeof(arr1)/sizeof(arr1[0]);
    int n = sizeof(arr2)/sizeof(arr2[0]);

    //Output: arr=[1,2,3,4,5,6]
    int arr[m+n];

    int i=0,j=0;
    int k=0;     //for result array

    while((i != m) && (j != n)){
        if(arr1[i]<arr2[j]){
            arr[k]=arr1[i];
            k++;
            i++;
        }else{
            arr[k]=arr2[j];
            k++;
            j++;
        }
    }
    
    if(i!=m){
        while(i<m){
            arr[k]=arr1[i];
            i++;
            k++;
        }
    }else{
        while(j<n){
            arr[k]=arr2[j];
            j++;
            k++;
        }
    }

    for(int i=0;i<(m+n);i++){
        cout<<arr[i]<<" ";
    }


}