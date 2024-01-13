//print largest and smallest

#include<iostream>
using namespace std;

int largestandsmallest(int x,int y,int z, int *largest){
    *largest = max(x,max(y,z));
    return min(x, min(y,z));
}

int main(){
    int x,y,z;
    cin>>x>>y>>z;
    int largest;
    int smallest = largestandsmallest(x,y,z,&largest);
    
    cout<<largest<<" "<<smallest<<endl;

}