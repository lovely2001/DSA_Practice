#include<iostream>
#include<vector>
#include<map>
using namespace std;

int main(){
    int n;
    cin>>n;

    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }

    vector<int>prefixsum(n);
    prefixsum[0]=v[0];
    for(int i=1;i<n;i++){
        prefixsum[i] = v[i]+prefixsum[i-1];
    }
    
    int ans=0;
    map<int,int> m;
    for(int i=0;i<n;i++){
        if(m.find(prefixsum[i]) != m.end()){
            int value = i-m[prefixsum[i]];
            ans=max(ans,value);
        }else{
            m[prefixsum[i]]=i;
        }
    }

    cout<<ans;

}