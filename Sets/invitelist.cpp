#include<iostream>
#include<set>
using namespace std;

int main(){
    set<string> name;
    int n = 5;

    while(n--){
        string names;
        cin>>names;
        name.insert(names);
    }

    cout<<"Printing Invite list \n";

    for(auto values: name){
        cout<<values<<endl;
    }
}