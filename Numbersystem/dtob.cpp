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
    return 0;
}
