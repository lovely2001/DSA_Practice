//count the number of occurence of ele 'x'

#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> v(6);

    for(int i=0;i<6;i++){
        cin>>v[i];
    }
    
    cout<<"Enter x : "<<endl;
    int x;
    cin>>x;

    int count=0;
    for(int i=0;i<6;i++){
        if(v[i]==x){
            count++;
        }
    }

    cout<<count<<endl;

}