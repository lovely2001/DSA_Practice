//product of 2 number using pointers
#include<iostream>
using namespace std;

int main(){
    int x,y;
    cin>>x>>y;

    int *ptrx = &x;
    int *ptry = &y;

    cout<<"product of x and y is "<< (*ptrx) * (*ptry);

}