#include<iostream>
#include<stack>
#include<vector>
using namespace std;

vector<int> nge(vector<int> &arr){
    int n=arr.size();
    vector<int> ouptut(n,-1);
    stack<int> indexes;
    indexes.push(0);

    for(int i=1;i<n;i++){
        while(!indexes.empty() and arr[i]>arr[indexes.top()]){
            ouptut[indexes.top()]=arr[i];
            indexes.pop();
        }
        indexes.push(i);
    }
    return ouptut;

}
int main(){
    vector<int> arr = {4,6,3,1,0,9,5,6,7,3,2};
    vector<int> output =  nge(arr);
    for(int i=0;i<arr.size();i++){
        cout<<output[i]<<endl;
    }

}