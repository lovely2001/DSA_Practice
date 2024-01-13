//Given Q queries, check if the given number is present in the array or not

#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> v = {2,3,5,6,7,8};
    int n = v.size();

    cout<<"Enter number of queries : "<<endl;
    int q;
    cin>>q;
    
    const int N = 1e5 + 10;
    vector<int>frequency(N,0);
    for(int i=0;i<n;i++){
        frequency[v[i]]++;
    }
     
    cout<<"Enter Queries : "<<endl;
    while(q--){
        int queryelement;
        cin>>queryelement;
        cout<<frequency[queryelement]<<endl;
    }

}