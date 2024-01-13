//Given an array sorted in ascending order,return an array of the square of each number sorted in non-decreasing order.

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void sortsqaureinascendingorder(vector<int> &v){
    int size = v.size();
    int left=0;
    int right=size-1;
    vector<int> ansarray;

    while(left<=right){
        if(abs(v[left])<abs(v[right])){
            ansarray.push_back(v[right]*v[right]);
            right--;
        }else{
            ansarray.push_back(v[left]*v[left]);
            left++;
        }
    }

    reverse(ansarray.begin(),ansarray.end());

    for(int i=0;i<size;i++){
        cout<<ansarray[i]<<endl;
    }
}

int main(){
    int n;
    cin>>n;

    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }

    sortsqaureinascendingorder(v);

    
}
