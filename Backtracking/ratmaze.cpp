#include<iostream>
#include<vector>
using namespace std;

bool canwego(int a,int b, vector<vector<int>> &grid){
    int n=grid.size();
    return ((a<=n-1 && b<=n-1 && a>=0 && b>=0) && grid[a][b]==1);
}

int countnoofways(int i,int j,vector<vector<int>> &grid){
    int n=grid.size();
    if(i==n-1 && j==n-1)
    {   
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                cout<<grid[i][j]<<" ";
            }cout<<endl;
        }
        cout<< " ***** "<<endl;
        return 1;
    }

    int ans=0; 
    grid[i][j]=2;
    

    if(canwego(i,j+1,grid)){
        ans+=countnoofways(i,j+1,grid);
    }

    if(canwego(i,j-1,grid)){
        ans+=countnoofways(i,j-1,grid);
    }

    if(canwego(i+1,j,grid)){
        ans+=countnoofways(i+1,j,grid);
    }

    if(canwego(i-1,j,grid)){
        ans+=countnoofways(i-1,j,grid);
    }

    grid[i][j]=1;
    return ans;

}

int main(){
    vector<vector<int>> grid = {
        {1,1,1,1},
        {0,1,0,1},
        {0,1,1,1},
        {0,1,1,1}
    };

    int ans = countnoofways(0,0,grid);
    cout<<ans;
    return 0;
}