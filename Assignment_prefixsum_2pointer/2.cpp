// ​There is a man going on a trek. The trek consists of n + 1 points at different altitudes. The
// man starts his trek on point 0 with altitude equal 0. You are given an integer array height
// of length n where height[i] is the net height in altitude between points i​ and i + 1 for all
// (0 <= i < n). Return the highest altitude of a point.

#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> v={-5,-3,-2};

    for(int i=1;i<v.size();i++){
        v[i]+=v[i-1];
    }

    int ans=0;

    for(int i=0;i<v.size();i++){
        ans=max(ans,v[i]);
    }

    cout<<ans<<endl;
}