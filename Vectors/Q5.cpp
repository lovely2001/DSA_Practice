//Rotate the given array 'a' by k steps.
//k>n

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    // using extra memory
    // int arr[]={1,2,3,4,5};
    // int k=3;
    // int n=5;
    // //if k>n
    // k=k%n;
    // int ansarray[n];
    // int j=0;

    // //inserting last k element in ans array
    // for(int i=(n-k);i<n;i++){
    //     ansarray[j++]=arr[i];
    // }

    // //inserting first (n-k) element in ans array
    // for(int i=0;i<=k;i++){
    //     ansarray[j++]=arr[i];
    // }

    // for(int i=0;i<n;i++){
    //     cout<<ansarray[i]<<endl;
    // }

    //without using extra memory
    vector<int>v={1,2,3,4,5};
    int k=2;
    k=k%v.size();

    reverse(v.begin(),v.end());
    reverse(v.begin(),v.begin()+k);
    reverse(v.begin()+k,v.end());

    for(int i=0;i<v.size();i++){
        cout<<v[i]<<endl;
    }
}