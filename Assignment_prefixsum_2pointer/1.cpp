//Given an integer array and two integers L and R. Find the sum of elements between the index L and index R.
//Note: Both L and R inclusive.

#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n;
    cin>>n;

    vector<int> v(n);

    for(int i=0;i<n;i++){
        cin>>v[i];
    }

    //calculateprefixsumarray
    for(int i=1;i<n;i++){
        v[i]+=v[i-1];
    }

    int l,r;
    cin>>l>>r;

    cout<<v[r]-v[l-1]<<endl;
}