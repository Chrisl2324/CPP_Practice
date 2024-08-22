#include <iostream>
#include <string>

using namespace std;


int digital_root(int number){
    while(number >= 10){
        int sum = 0;
        while(number >0){
            sum += number %10;
            number = number /10;
        }
        number = sum;
    }
    return number;
}

int main(void){
    int number = 245;
    int result = digital_root(number);
    cout << result << endl;
    return 0;
}