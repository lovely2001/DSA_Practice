//rotate the matrix by 90 deree in clockwise direction without using any extra space.

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void rotatearrayby90(vector<vector<int>> &v){
    //transpose of a matrix
    for(int i=0;i<v.size();i++){
        for(int j=0;j<i;j++){
            swap(v[i][j],v[j][i]);
        }
    }

    //reverse the row
    for(int i=0;i<v.size();i++){
        reverse(v[i].begin(),v[i].end());
    }
}

int main(){
    int n;
    cin>>n;
    vector<vector<int>> V(n,vector<int>(n));

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>V[i][j];
        }
    }

    rotatearrayby90(V);

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<V[i][j]<<" ";
        }cout<<endl;
    }

    return 0;
}
