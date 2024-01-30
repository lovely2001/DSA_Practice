#include<iostream>
#include<stack>
#include<vector>
#include<algorithm>
using namespace std;

vector<int> pge(vector<int> &arr){
    int n=arr.size();
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }cout<<endl;

    reverse(arr.begin(),arr.end());
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }cout<<endl;

    vector<int> output(n,-1);
    stack<int> st;
    st.push(0);

    for(int i=1;i<n;i++){
        while(!st.empty() && arr[i]>arr[st.top()]){
            output[st.top()]=n-i-1;
            st.pop();
        }
    }

    for(int i=0;i<arr.size();i++){
        cout<<output[i]<<" ";
    }cout<<endl;

    reverse(output.begin(),output.end());

    for(int i=0;i<arr.size();i++){
        cout<<output[i]<<" ";
    }cout<<endl;

    return output;
}

int main(){
    vector<int> arr = {100,80,60,70,60,75,85};
    vector<int>res = pge(arr);

    for(int i=0;i<arr.size();i++){
        cout<<i-res[i]<<" ";
    }cout<<endl;
}