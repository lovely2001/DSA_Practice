//check if the given array is sorted or not

#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> v(6);

    for(int i=0;i<6;i++){
        cin>>v[i];
    }


    bool ans = true;
    for(int i=1;i<6;i++){
        if(v[i]<=v[i-1]){
            ans=false;
            break;
        }
    }
    cout<<ans<<endl;

}