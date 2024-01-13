//Given two arrays a[] and b[] of same size.Your task is to find the minimum sum of two elements such that they belong to 
//different arrays and are not at the same index. Here 1<size<101

#include<iostream>
using namespace std;

int main(){
    int a[]={5,6,10,4,9};
    int b[]={1,2,3,4,5};
    int size=5;

    int min_a = INT16_MAX;
    int min_2a = INT16_MAX;
    int min_b = INT16_MAX;
    int min_2b = INT16_MAX;
    int indexa=0;
    int indexb=0;

    for(int i=0;i<size;i++){
        if(a[i]<min_a){
            min_a = a[i];
            indexa=i;
        }
        else if(a[i]<min_2a){
            min_2a = a[i];
        }
        if(b[i]<min_b){
            min_b = b[i];
            indexb=i;
        }
        else if(b[i]<min_2b){
            min_2b = b[i];
        }

    }

    if(indexa!=indexb){
        cout<<min_a+min_b<<endl;
    }else{
        cout<<min(min_a+min_2b,min_b+min_2a)<<endl;
    }

}