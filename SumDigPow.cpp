#include <vector>
#include <iostream>
#include <math.h>

using namespace std;

vector<unsigned int> sumDigPow(unsigned int a, unsigned int b) {
    vector<unsigned int> result;
    for(unsigned int i = a; i <=b; i++){
        unsigned int digits = log10(i) + 1;
        int sum = 0;
        int power = digits;
        int current = i;
        while(current > 0){
            sum += pow((current%10), power);
            current = current /10;
            power--;
        }
        if(sum == i){
            result.push_back(i);
        }
    }
    return result;
}

int main(void){
    unsigned int a = 1, b = 100;
    vector<unsigned int> result = sumDigPow(a, b);
    for(unsigned int num: result){
        cout << num << endl;
    }
    return 0;
}