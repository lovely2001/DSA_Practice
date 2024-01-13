#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    for(int i=1;i<=n;i++){
        for(int j=1;j<=(n-i);j++)
        {
            cout<<" ";
        }
        for(int k=1;k<=i;k++)
        {
            if(k==1 || i==n){
                cout<<i<<" ";
            }else{
                cout<<" "<<" ";
            }
        }
        for(int l=1;l<=(i-1);l++)
        {
            if(l==1 || i==n){
                cout<<i<<" ";
            }else{
                cout<<" "<<" ";
            }
        }
        cout<<endl;
    }
}