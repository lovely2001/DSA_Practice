#include<iostream>
#include<vector>
using namespace std;


int leftmostOnerow(vector<vector<int>> &v){
    int leftmostone = -1;
    int maxonerow = -1;

    int j=v[0].size()-1;
    
    //finding lest mostone
    while(j>0 && v[0][j]==1){
        leftmostone=j;
        maxonerow=0;
        j--;
    } 

    //check in rest of rows
    for(int i=1;i<v.size();i++){
        while(j>=0 && v[i][j]==1){
            leftmostone=j;
            j--;
            maxonerow=i;
        }
    }

    return maxonerow;

}

int maximumOnesrow(vector<vector<int>> &v){
    int rownumber = -1;
    int maxnumberofones = INT16_MIN;

    for(int i=0;i<v.size();i++){
        int numberofones = 0; 
        for(int j=0;j<v[i].size();j++){
            if(v[i][j]==1){
                numberofones++; 
            }
        }
        if(numberofones > maxnumberofones){
            maxnumberofones = numberofones;
            rownumber = i;
        }
    }
    return rownumber;
}

int main(){
    int row;
    int column;
    cin>>row>>column;

    vector<vector<int>> V(row,vector<int>(column));

    for(int i=0;i<row;i++){
        for(int j=0;j<column;j++){
            cin>>V[i][j];
        }
    }

    int res =  maximumOnesrow(V);
    int res1 = leftmostOnerow(V);
    cout<<res<<endl;
    cout<<res1<<endl;

    return 0;
}
