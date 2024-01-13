#include<iostream>
using namespace std;

int f(int p,int q){
    if(q==0){
        return 1;
    }
    return p*f(p,q-1);
}

int foptimized(int p,int q){
    //base case
    if(q==0){
        return 1;
    }
    if(q%2 == 0){
        int result = f(p,q/2);
        return result*result;
    }
    else{
        int result = f(p,(q-1)/2);
        return result*result;
    }
}

int main(){
    cout<<f(17,2)<<endl;
    cout<<foptimized(17,2)<<endl;
}