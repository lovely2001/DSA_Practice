//Given radius of a circle. Write a function to print the area and circumference of the circle.

#include<iostream>
using namespace std;

float areaofcircle(int radius){
    return 3.14*radius*radius;
}

float circumferenceofcircle(int radius){
    return 2*3.14*radius;
}

int main(){
    int radius;
    cin>>radius;

    cout<<"Area of circle is : "<<areaofcircle(radius)<<endl;
    cout<<"Cicumference of circle is : "<<circumferenceofcircle(radius);
}