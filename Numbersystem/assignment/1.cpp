// Print the sum of the first 5 decimal numbers from 1 to 5 in binary format.

#include <iostream>
using namespace std;

int main() {
    int sum=0;
    for(int num=1;num<=5;num++){
        sum+=num;
    }
    cout<<sum<<endl;
    int placevalue=1;
    int ans=0;
    while(sum>0){
            int remainder = sum%2;
            ans += remainder*placevalue;
            sum/=2;
            placevalue*=10;
        }
    cout << ans << endl;
    return 0;
}
