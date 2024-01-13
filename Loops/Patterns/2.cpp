#include<iostream>
using namespace std;

int main(){
    int rows;
    int columns;
    cin>>rows;
    cin>>columns;

    for(int i=1;i<=rows;i++){
        for(int j=1;j<=columns;j++){
            if(i==1 || j==1 || j==columns ||i==rows){
                cout<<"*"<<" ";
            } else{
                cout<<" "<<" ";
            }
        }cout<<endl;
    }
}