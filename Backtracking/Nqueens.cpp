#include<iostream>
#include<vector>
using namespace std;

bool canplacequeen(int row, int col, vector<vector<char>> &grid) {
    for(int i=row-1; i>=0; i--){
        if(grid[i][col] == 'Q'){
            return false;
        }
    }

    for(int i=row-1, j=col-1; i>=0 && j>=0; i--, j--){
        if(grid[i][j] == 'Q'){
            return false;
        }
    }

    for(int i=row-1, j=col+1; i>=0 && j<grid.size(); i--, j++){
        if(grid[i][j] == 'Q'){
            return false;
        }
    }

    return true;
}


void nqueenn(int currrow,int n,vector<vector<char>> &grid){

    if(currrow == n){
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                cout<<grid[i][j]<<" ";
            }cout<<endl;
        }
        cout<<" **** "<<endl;
    }

    for(int col=0;col<n;col++){
        if(canplacequeen(currrow,col,grid)){
            grid[currrow][col] = 'Q';
            nqueenn(currrow+1,n,grid);
            grid[currrow][col] = '.';
        }
    }

}

int main(){
    int n=4;
    vector<vector<char>> grid(n,vector<char> (n,'.'));
    nqueenn(0,n,grid);
    return 0;
}