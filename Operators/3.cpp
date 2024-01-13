//There are 45 total pupils in the class, 25 of whom are boys. Write a program to find how many girls received grades "A" if 17 boys made up 80% of the students that received grades "A".

#include<iostream>
using namespace std;

int main(){
    
    int total_boys = 17;
    int total_people = (80*45)/100;
    int total_girls = total_people-total_boys;
    cout<<"Number of girls getting grade A is "<<total_girls<<endl;


}