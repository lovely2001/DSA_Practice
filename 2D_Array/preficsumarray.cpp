#include<iostream>
#include<vector>
using namespace std;


int rectnaglesum(vector<vector<int>> &v,int l1,int r1,int l2, int r2){
    int rectsum=0;
    for(int i=l1;i<=l2;i++){
        for(int j=r1;j<=r2;j++){
            rectsum+=v[i][j];
        }
    }
    return rectsum;
}

//row wise prefix sum calculation
int rectnaglesumusingprefixusm(vector<vector<int>> &v,int l1,int r1,int l2, int r2){
    int rectsum=0;
    int size=v.size();
    vector<vector<int>> prefixsum(size,vector<int>(v[0].size()));
    for(int i=0;i<v.size();i++){
        int prefix=0;
        for(int j=0;j<v[0].size();j++){
            prefix+=v[i][j];
            prefixsum[i][j]=prefix;
        }
    }
    for(int i=0;i<prefixsum.size();i++){
        for(int j=0;j<prefixsum[0].size();j++){
            cout<<prefixsum[i][j]<<" ";
        }cout<<endl;
    }
    
    for(int i=l1;i<=l2;i++){
        if(r1!=0){
            rectsum+=prefixsum[i][r2]-prefixsum[i][r1-1];
        }else{
            //matrix[i][r2-1]=0
            rectsum+=prefixsum[i][r2];
        }
    }
    return rectsum;
}

//Both row wise and column wise prefix sum calculation
int rectnaglesumusingbothprefixsum(vector<vector<int>> &v,int l1,int r1,int l2, int r2){
    int rectsum=0;
    for(int i=0;i<v.size();i++){
        for(int j=0;j<v[0].size();j++){
            v[i][j]+=v[i][j-1];
        }
    }

    //prefix sum column wise
    for(int i=0;i<v.size();i++){
        for(int j=0;j<v[0].size();j++){
            v[i][j]+=v[i-1][j];
        }
    }

    for(int i=0;i<v.size();i++){
        for(int j=0;j<v[0].size();j++){
            cout<<v[i][j]<<" "; 
        }cout<<endl;
    }
    
    
    int top_sum=0,left_sum=0,topleft_sum=0;
    if(l1!=0) top_sum=v[l1-1][r2];
    if(r1!=0) top_sum=v[l2][r1-1];
    if(l1!=0 && r1!=0) topleft_sum=v[l1-1][r1-1];

    rectsum=v[l2][r2]-top_sum-left_sum+topleft_sum;
    return rectsum;

}
int main(){
    int n,m;
    cin>>n>>m;
    vector<vector<int>> V(n,vector<int>(m));

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>V[i][j];
        }
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<V[i][j]<<" ";
        }cout<<endl;
    }

    int l1,r1,l2,r2;
    cin>>l1>>r1;
    cin>>l2>>r2;
    cout<<rectnaglesum(V,l1,r1,l2,r2)<<endl;
    cout<<rectnaglesumusingprefixusm(V,l1,r1,l2,r2)<<endl;
    cout<<rectnaglesumusingbothprefixsum(V,l1,r1,l2,r2)<<endl;
}