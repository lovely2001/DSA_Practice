//Given a natural number, find the number of 0’s in the binary representation of that number. Note: Don’t count the preceding zeros. 
//For example: 001001 has 2 zeros as the first two zeros from left are preceding zeros. 

#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    int number_in_binary = 0;
    int place_value = 1; 
    while (n > 0) {
        int digit = n % 2;
        number_in_binary += digit * place_value;
        n /= 2;
        place_value *= 10; 
    }

    cout << number_in_binary << endl;

    int count=0;

    while(number_in_binary>0){
        if(number_in_binary%10 == 0){
            count++;
        }
        number_in_binary/=10;
    }
    cout<<count<<endl;
}
