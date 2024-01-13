//Given a matrix arr[][] of integers, print the prefix sum matrix for it.
#include<iostream>
#include<vector>
using namespace std;

void prefixsum(vector<vector<int>> &v){
    for(int i=0;i<v.size();i++){
        for(int j=1;j<v[0].size();j++){
            v[i][j]= v[i][j] + v[i][j-1];
        }
    }

    for(int i=1;i<v.size();i++){
        for(int j=0;j<v[0].size();j++){
            v[i][j]= v[i][j] + v[i-1][j];
        }
    }

    for(int i=0;i<v.size();i++){
        for(int j=0;j<v[0].size();j++){
            cout<<v[i][j]<<" ";
        }cout<<endl;
    }

}

int main(){
    int n,m;
    cin>>n>>m;

    vector<vector<int>> v(n,vector<int>(m));

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>v[i][j];
        }
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<v[i][j]<<" ";
        }cout<<endl;
    }

    prefixsum(v);
}