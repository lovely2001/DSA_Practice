#include<iostream>
#include<vector>
#include<map>
using namespace std;

int main(){
    int n;
    cin>>n;

    vector<string> input;
    for(int i=0;i<n;i++){
        string value;
        cin>>value;
        input.push_back(value);
    }

    map<char,int> characters;

    for(int i=0;i<n;i++){
        for(int j=0;j<(input[i].size());j++){
            characters[input[i][j]]++;
        }
    }

    for(auto ele: characters){
        cout<< ele.first << " : " <<ele.second;
        cout<<endl;
    }

    bool ans=true;

    for(auto ele: characters){
        if(ele.second % n != 0){
            ans=false;
        }
    }

    cout<<ans;

}