//find the difference between the sum of elements at even indices to the sum of elements at odd indices


#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> v(6);

    for(int i=0;i<6;i++){
        cin>>v[i];
    }
    
    int sum=0;
    for(int i=0;i<6;i++){
        if(v[i]%2==0){
            sum+=v[i];
        }else{
            sum-=v[i];
        }
    }
    cout<<sum<<endl;

}