//Array Manipulation : find the number in a given array where all the element are being repeated twice with one value being unique


#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> v(9);
     
    int size =  v.size();
    for(int i=0;i<size;i++){
        cin>>v[i];
    }

    vector<int> frequency(size,0);
    for(int i=0;i<size;i++){
        frequency[v[i]]++;
    }

    for(int i=0;i<size;i++){
        if(frequency[i]==1){
            cout<<i<<endl;
        }
    }
    

    cout<<"Using array manipulation - "<<endl;

    for(int i=0;i<size;i++){
        for(int j=i+1;j<size;j++){
            if(v[i]==v[j]){
                v[i]=v[j]=-1;
            }
        }
    }

    for(int ele :v){
        if(ele>0){
            cout<<ele<<endl;
        }
    }


}