//check whether a string has all english alphabets or not

#include<iostream>
#include<set>
#include<algorithm> 
using namespace std;

int main(){
    string text = "abcdefghijklmnopqrstuvwxyz";
    
    //To convert uppercase to lowercase
    transform(text.begin(),text.end(),text.begin(),::tolower);
    if(text.length() < 26 ){
        cout<<"text does not have all english alphabets"<<endl;
    }
     
    set<char> textstr; 
    for(auto ele: text){
        textstr.insert(ele);
    }

    if(textstr.size() == 26){
        cout<<"text have all english alphabets"<<endl;
    }else{
        cout<<"text does not have all english alphabets"<<endl;
    }
}