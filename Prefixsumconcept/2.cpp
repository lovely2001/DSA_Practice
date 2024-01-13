//check if we can partition the array into 2 subarray with equal sum.


#include<iostream>
#include<vector>
using namespace std;

bool checkpartionispossibleornot(vector<int> &v){
    int total_sum=0;
    for(int i=0;i<v.size();i++){
        total_sum+=v[i];
    }

    int prefixsum=0;
    for(int i=0;i<v.size();i++){
        prefixsum+=v[i];
        int suffix_sum=total_sum-prefixsum;

        if(suffix_sum==prefixsum){
            return true;
        }
    }

    return false;
}

int main(){
    int n;
    cin>>n;

    vector<int> v(n);

    for(int i=0;i<n;i++){
        cin>>v[i];
    }

    cout<<checkpartionispossibleornot(v)<<endl;
}