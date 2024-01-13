//find the second largest element in the array

#include<iostream>
#include<vector>
using namespace std;


int largestelementindex(int array[],int size){
    int max=INT16_MIN;
    int maxindex=-1;
    for(int i=0;i<size;i++){
        if(array[i]>max){
            max=array[i];
            maxindex=i;
        }
    }
    return maxindex;
}

int main(){
    int arr[] =  {2,3,5,7,6,1,7};

    // int largesteleindex = largestelementindex(arr,7);
    
    // int largestelement = arr[largesteleindex];

    // for(int i=0;i<7;i++){
    //     if(arr[i]==largestelement){
    //         arr[i]=-1;
    //     }
    // }

    // int secondlargesteleindex = largestelementindex(arr,7);

    // cout<<arr[secondlargesteleindex]<<endl; 

    int max=INT16_MIN;
    int secondmax=INT16_MIN;
    //2 approach
    for(int i=0;i<7;i++){
        if(arr[i]>max){
            max=arr[i];
        }
        if(arr[i]>secondmax && arr[i]!=max){
            secondmax=arr[i];
        }
    }

    cout<<secondmax<<endl;


}