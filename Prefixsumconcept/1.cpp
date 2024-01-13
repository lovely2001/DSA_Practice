//given the integer array, return the prefix sum/running sum in the same array without creating a new array

#include<iostream>
#include<vector>
using namespace std;

void runningsum(vector<int> &v){
    if(v.empty()){
        return;
    }

    for(int i=1;i<v.size();i++){
        v[i]+=v[i-1];
    }

}

int main(){
    int size;
    cin>>size;
    
    vector<int> v(size);

    for(int i=0;i<size;i++){
        cin>>v[i];
    }

    runningsum(v);

    for(int i=0;i<size;i++){
        cout<<v[i]<<endl;
    }
}