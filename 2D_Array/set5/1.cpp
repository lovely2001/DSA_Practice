//Given a 2D matrix with m rows and n columns containing integers. Print and return the row number with maximum sum in the array.
#include<iostream>
#include<vector>
using namespace std;

int rownumberhavingmaxsum(vector<vector<int>> &v){
    int maxsumrownumber=-1;
    int maxsum=INT16_MIN;
    int size=v[0].size()-1;
    for(int i=0;i<v.size();i++){
        for(int j=1;j<v[0].size();j++){
            v[i][j]= v[i][j] + v[i][j-1];
        }
    }

    for(int i=0;i<v.size();i++){
        for(int j=0;j<v[0].size();j++){
            cout<<v[i][j]<<" ";
        }cout<<endl;
    }

    for(int i=0;i<v.size();i++){
        if(v[i][size]>maxsum){
            maxsumrownumber=i;
        }
    }
    return maxsumrownumber;
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

    cout<<rownumberhavingmaxsum(v);
}