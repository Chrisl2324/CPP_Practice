#include <iostream>
#include <cmath>

using namespace std;

bool is_square(int n){
    if(n < 0){
        return false;
    }
    if(n == 0){
        return true;
    }
    for(int i = 1; i < sqrt(n); i++){
        if((i*i) == n){
            return true;
        }
    }
    return false;
}

int main(void){
    int n = 9;
    bool result = is_square(n);
    cout << result << endl;

    return 0;
}

