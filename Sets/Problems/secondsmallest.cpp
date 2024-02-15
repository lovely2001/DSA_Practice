#include<iostream>
#include<vector>
#include<set>
using namespace std;


int main(){
    int n;
    cin>>n;
    vector<int> numbers;
    while(n--){
        int val;
        cin>>val;
        numbers.push_back(val);
    }

    set<int> s1;  
    for(auto ele:numbers){
        s1.insert(ele);
    }

    set<int>::iterator itr;
    itr = s1.begin();
    advance(itr,1);

    cout<<"Second smallest element : "<<*itr;
}