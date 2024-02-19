//TC - O(fact(n))

#include<iostream>
using namespace std;

void permutations(string &str, int i){
    if(i==str.size()){
        cout<<str<<endl;
        return;
    }
    for(int j=i;j<str.size();j++){
        swap(str[i],str[j]);
        permutations(str,i+1);
        swap(str[i],str[j]);
    }
}
int main(){
    string s="abc";
    permutations(s,0);

}