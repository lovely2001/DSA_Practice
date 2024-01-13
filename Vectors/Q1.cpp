//Target sum : find the total number of pairs in the array whose sum is equal to the target sum "x"

#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> v(5);
     
    int size =  v.size();
    for(int i=0;i<size;i++){
        cin>>v[i];
    }
    
    int x;
    cin>>x;

    int pairs=0;
    for(int i=0;i<size;i++){
        for(int j=i+1;j<size;j++){
            if((v[i] + v[j]) == x){
                pairs++;
            }
        }
    }
    cout<<"Number of pairs : "<<pairs<<endl;

}