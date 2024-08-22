#include <iostream>

using namespace std;

long zeros(long n) {
    if(n < 5){
        return 0;
    }
    long count = 0;
    for(int i = 5; n/i >=1 ; i*=5){
        count += n/i;
    }

    return count;
}

int main(void){
    long n = 100;
    long result = zeros(n);
    cout << result << endl;

    return 0;
}