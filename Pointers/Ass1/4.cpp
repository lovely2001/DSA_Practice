//return 1 character ,last character and number of character of 't' in a string

#include<iostream>
using namespace std;

int numberofocc(string s, char* first, char * last){
    *first = s[0];
    *last = s[s.size()-1];

    int count=0;
    for(char ch: s){
        if(ch=='t'){
            count++;
        }
    }
    return count; 
}

int main(){
    string input;
    cin>>input;

    char first,last;
    int count = numberofocc(input,&first,&last) ;
    cout<<first<<" "<<last<<" "<<count<<endl;


}