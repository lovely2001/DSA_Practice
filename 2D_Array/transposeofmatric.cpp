#include<iostream>
using namespace std;

int main(){

    int r1,c1;
    cin>>r1>>c1;
    int matrix1[r1][c1];

    cout<<"Enter elements of matrix : "<<endl;
    for(int i=0;i<r1;i++){
        for(int j=0;j<c1;j++){
            cin>>matrix1[i][j];
        }
    }
    
    cout<<"Transpose of matrix : "<<endl;
    int transpose[c1][r1];

    for(int i=0;i<r1;i++){
        for(int j=0;j<c1;j++){
            transpose[j][i]=matrix1[i][j];
        }cout<<endl;
    }
    
    cout<<"Original Matrix : "<<endl;
    for(int i=0;i<r1;i++){
        for(int j=0;j<c1;j++){
            cout<<matrix1[i][j]<<" ";
        }cout<<endl;
    }

    cout<<"Transpose Matrix : "<<endl;
    for(int i=0;i<c1;i++){
        for(int j=0;j<r1;j++){
            cout<<transpose[i][j]<<" ";
        }cout<<endl;
    }

}

