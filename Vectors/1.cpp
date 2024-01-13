// find the last occurence of an element in an array

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

    int occurence=-1;
    // for(int i=0;i<6;i++){
    //     if(v[i]==x){
    //         occurence=i;
    //     }
    // }
    
    //Optimized approach
    for(int i=6;i>0;i--){
        if(v[i]==x){
            occurence=i;
            break;
        }
    }


    cout<<occurence<<endl;

}