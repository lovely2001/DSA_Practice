#include<iostream>
using namespace std;

int main(){
    int arr[] = {3,9,18,11,7};
    int ele;
    cin>>ele;

    int size=sizeof(arr)/sizeof(arr[0]);
    int ans=-1;
    for(int i=0;i<size;i++){
        if(arr[i]==ele){
            ans=i;
            break;
        }
    }

    cout<<ans;
}