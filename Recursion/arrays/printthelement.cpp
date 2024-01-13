#include<iostream>
using namespace std;

void f(int *arr, int idx,int n){
    if(idx==n) return;

    cout<<arr[idx]<<endl;
     
    f(arr,idx+1,n);

}
int main(){
    int n=5;
    int arr[n]={2,6,1,3,8};

    f(arr,0,n);
}