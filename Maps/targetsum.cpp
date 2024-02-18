#include<iostream>
#include<vector>
#include<map>
using namespace std;

vector<int> targetsum (vector<int> &numbers, int target){
    vector<int> ans(2);
    map<int,int> mp;
    for(int i=0;i<numbers.size();i++){
        if(mp.find(target-numbers[i]) != mp.end()){
            ans[0] = mp[target-numbers[i]];
            ans[1] = i;
            return ans;
        }else{
            mp[numbers[i]]=i;
        }
    }
    return ans;
}
int main(){
    int n;
    cin>>n;
    vector<int> numbers(n);
    for(int i=0;i<n;i++){
        cin>>numbers[i];
    }
    cout<<"Enter target sum : "<<endl; 
    int target;
    cin>>target; 

    vector<int > ans = targetsum(numbers,target); 
    cout<<ans[0]<<" , "<<ans[1]<<endl;
}