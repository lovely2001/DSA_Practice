#include<iostream>
#include<vector>
#include<map>
using namespace std;

int main(){
    int n;
    cin>>n;

    vector<int> numbers(n);
    for(int i=0;i<n;i++){
        cin>>numbers[i];
    }

    map<int,int> num;

    for(int i=0;i<n;i++){
        num[numbers[i]]++;
    }

    int sum=0;

    for(auto ele: num){
        if(ele.second>1){
            sum+=ele.first;
        }
    }

    cout<<"Sum is : "<<sum<<endl;
}