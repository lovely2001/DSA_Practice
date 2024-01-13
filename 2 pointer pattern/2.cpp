//Given an array of integers ‘a’,;move all the even integers at the beginning of the array followed by
//all the odd integers
#include<iostream>
#include<vector>
using namespace std;

//approach1 -- using 2 pointer approach
void sortevenandoddnumber(vector<int>&v){
    int start=0;
    int end=v.size()-1;

    while(start<end){
        if((v[start]%2!=0 && v[end]%2==0)){
            swap(v[start],v[end]);
            start++;
            end--;
        }
        if(v[start]%2==0){
            start++;
        } 
        if(v[end]%2!=0){
            end--;
        }
    }
}

int main(){
    
    int n;
    cin>>n;
    vector<int> v(n);

    for(int i=0;i<n;i++){
        cin>>v[i];
    }

    sortevenandoddnumber(v);

    for(int i=0;i<n;i++){
        cout<<v[i]<<endl;
    }
}