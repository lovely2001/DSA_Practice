#include<iostream>
#include<map>
using namespace std;

int main(){
    string str1;
    string str2;
    
    cout<<"Enter string 1 : "<<endl;
    cin>>str1;
    cout<<"Enter string 2 : "<<endl;
    cin>>str2;

    map<char,int> strmap;
    for(auto ele: str1){
        strmap[ele]++;
    }
    
    cout<<"After str1 : "<<endl;
    for(auto ele : strmap){
        cout<<ele.first << " : "<<ele.second<<endl;
    }

    for(auto ele: str2){
        strmap[ele]--;
    }
    
    cout<<"After str2 : "<<endl;
    for(auto ele : strmap){
        cout<<ele.first << " : "<<ele.second<<endl;
    }

    bool ans=true;
    for(auto ele: strmap){
        if(ele.second != 0){
            ans=false;
        }
    }

    cout<<ans;

}