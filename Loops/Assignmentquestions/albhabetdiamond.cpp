#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    

    //Upside pyramid
    for(int i=1;i<=n;i++){
        int val = 65;
        for(int j=1;j<=n-i;j++){
            cout<<" ";
        }
        for(int j=1;j<=(2*i - 1);j++){
            cout<<char(val++);
        }

        cout<<endl;
    }
    
    //Downside pyramid
    for(int i=1;i<=n-1;i++){
        int val = 65;
        for(int j=1;j<=i;j++){
            cout<<" ";
        }
        for(int j=((n-i)*2 - 1 );j>=1;j--){
            cout<<char(val++);
        }
        
        cout<<endl;
    }
}