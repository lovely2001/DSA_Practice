//sort an array consisting of only zeros and ones

#include<iostream>
#include<vector>
using namespace std;

//approach1
void sortzerosandones(vector<int>&v){
    int count_zeros=0;
    int n=v.size();
    for(int i=0;i<n;i++){
        if(v[i]==0){
            count_zeros++;
        }
    }

    // for(int i=0;i<count_zeros;i++){
    //     v[i]=0;
    // }

    // for(int i=count_zeros;i<n;i++){
    //     v[i]=1;
    // }

    for(int i=0;i<n;i++){
        if(i<count_zeros){
            v[i]=0;
        }else{
            v[i]=1;
        }
    }
}


//approach2 -- using 2 pointer approach
void sortzerosandones1(vector<int>&v){
    int start=0;
    int end=v.size()-1;

    while(start<end){
        if((v[start]==1 && v[end]==0)){
            swap(v[start],v[end]);
            start++;
            end--;
        }
        if(v[start]==0){
            start++;
        } 
        if(v[end]==1){
            end--;
        }
    }
}

int main(){
    
    int n;
    cin>>n;
    vector<int> v(n);

    for(int i=0;i<n;i++){
        cin>>v[i];
    }

    //sortzerosandones(v);
    sortzerosandones1(v);

    for(int i=0;i<n;i++){
        cout<<v[i]<<endl;
    }
}