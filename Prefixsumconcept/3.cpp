//answer 'q' queries where you need to print the sum of values in a given range of indices from l to r(both included).
//1 base indexing is there

#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n;
    cin>>n;

    vector<int> v(n+1,0);

    for(int i=1;i<=n;i++){
        cin>>v[i];
    }

    //calculateprefixsumarray
    for(int i=1;i<=n;i++){
        v[i]+=v[i-1];
    }

    for(int i=0;i<=n;i++){
        cout<<v[i]<<" ";
    }cout<<endl;

    int q;
    cin>>q;
    while(q--){
        int l,r;
        cin>>l>>r;

        int ans=0;
        ans = v[r] - v[l-1];
        cout<<ans<<endl;
    }
}