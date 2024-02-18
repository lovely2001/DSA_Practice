#include<iostream>
#include<map>
using namespace std;

bool isisomorphic(string &str1 , string &str2){
    if(str1.size() != str2.size()){
        return false;
    }
    map<char,char> mp;

    //CHECKING ONE TO MANY MAPPIN FROM S1->S2
    for(int i=0;i<str1.size();i++){
        if(mp.find(str1[i]) != mp.end()){
            if(mp[str1[i]] != str2[i]){
                return false;
            }
        }else{
            mp[str1[i]] = str2[i];
        }
    }

    cout<<"Map value after check 1 string first : "<<endl;
    for(auto ele: mp){
        cout<<ele.first<<" : "<<ele.second<<endl;
    }

    mp.clear();

    //CHECKING ONE TO MANY MAPPIN FROM S2->S1
    for(int i=0;i<str2.size();i++){
        if(mp.find(str2[i]) != mp.end()){
            if(mp[str2[i]] != str1[i]){
                return false;
            }
        }else{
            mp[str2[i]] = str1[i];
        }
    }

    cout<<"Map value after check 2 string first : "<<endl;
    for(auto ele: mp){
        cout<<ele.first<<" : "<<ele.second<<endl;
    }

    return true;

}

int main(){
    string str1;
    string str2;
    
    cout<<"Enter string 1 : "<<endl;
    cin>>str1;
    cout<<"Enter string 2 : "<<endl;
    cin>>str2;

    cout<< isisomorphic(str1,str2)? " IS ISOMORPHIC " : "IS NOT ISOMORPHIC";
}