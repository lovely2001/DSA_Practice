#include<iostream>
#include<vector>
#include<set>
using namespace std;

int main(){
    int n,m;
    cin>>n>>m;
    vector<int> v1(n);
    vector<int> v2(m);

    cout<<"Enter elements of v1"<<endl;
    for(int i=0;i<n;i++){
        cin>>v1[i];
    }

    cout<<"Enter elements of v2"<<endl;
    for(int i=0;i<n;i++){
        cin>>v2[i];
    }

    set<int> v1set;
    int ans_sum=0;
    for(auto ele: v1){
        v1set.insert(ele);
    }

    for(auto ele:v2){
        if(v1set.find(ele) != v1set.end()){
            ans_sum+= ele;
        }
    }

    cout<<ans_sum;

}