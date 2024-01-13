#include<iostream>
#include<list>
using namespace std;

int main(){
    list<int> numbers = {1,2,3,4,5,6};

    auto itr1 = numbers.begin();
    auto itr2 = numbers.rbegin();
    // cout<<*itr1<<endl;
    // cout<<*itr2<<endl;
     
    /*
    //Traversal in a list 
    //method 1
    for(auto num:numbers){
        cout<<num<<" ";
    }cout<<endl;

    //method2
    for(auto itr=numbers.begin();itr!=numbers.end();itr++){
        cout<<*itr<<" ";
    }cout<<endl;

    //method3 --- reverse iteration
    for(auto itr=numbers.rbegin();itr!=numbers.rend();itr++){
        cout<<*itr<<" ";
    }cout<<endl;
    */


    //Insertion element into a list
    //Method1
    // auto itrr = numbers.begin();
    // advance(itrr,2);
    // numbers.insert(itrr,10);
    // for(auto num:numbers){
    //     cout<<num<<" ";
    // }cout<<endl;

    //method 2
    // auto itrr = numbers.begin();
    // advance(itrr,2);
    // numbers.insert(itrr,2,10);
    // for(auto num:numbers){
    //     cout<<num<<" ";
    // }cout<<endl;

//     //method3
//     auto start_itr = numbers.begin();
//     advance(start_itr,2);
//     auto end_itr = numbers.begin();
//     advance(end_itr,5);
//     numbers.insert(start_itr,end_itr,50);
//     for(auto num:numbers){
//         cout<<num<<" ";
//     }cout<<endl;
}