//count the number of triplets whose sum is equal to given value x

#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> v(6);
     
    int size =  v.size();
    for(int i=0;i<size;i++){
        cin>>v[i];
    }
    
    int x;
    cin>>x;

    int triplets=0;
    for(int i=0;i<size;i++){
        for(int j=i+1;j<size;j++){
            for(int k=j+1;k<size;k++){
                if((v[i] + v[j] +v[k]) == x){
                    triplets++;
                }
            }
        }
    }
    cout<<"Number of triplets : "<<triplets<<endl;
}