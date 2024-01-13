#include<iostream>
using namespace std;

int main(){
    int rows;
    int columns;
    cin>>rows;
    cin>>columns;

    for(int i=0;i<rows;i++){
        for(int j=0;j<columns;j++){
            cout<<"*"<<" ";
        }cout<<endl;
    }
}