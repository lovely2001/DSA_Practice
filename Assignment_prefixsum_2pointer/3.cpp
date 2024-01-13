//​Given an integer array arr consisting of 0’s and 1’s only, return the max length of
//sequence which contains equal numbers of 0 and 1.

#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> v = {0,1,0,1};

    int countzeros=0;
    int countones=0;

    for(int i=0;i<v.size();i++){
        if(v[i]==0){
            countzeros++;
        }else{
            countones++;
        }
    }

    int left=0;
    int right=v.size()-1;

    while(left<right){
        
    }

}