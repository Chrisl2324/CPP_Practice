#include <iostream>
#include <vector>
#include <array>

using namespace std;

int addDogYears(int humanYears){
    if(humanYears == 1){
        return 15;
    }
    else if(humanYears == 2){
        return 24;
    }
    else{
        return 24 + (5*(humanYears-2));
    }
}

int addCatYears(int humanYears){
    if(humanYears == 1){
        return 15;
    }
    else if(humanYears == 2){
        return 24;
    }
    else{
        return 24 + (4*(humanYears-2));
    }
}

array <int, 3> ages(int humanYears){
    int dogYears = addDogYears(humanYears);
    int catYears = addCatYears(humanYears);
    return {humanYears, catYears, dogYears};
}

int main(void){
    int humanYears = 3;
    array <int, 3> result = ages(humanYears);
    cout << result[0] << endl;
    cout <<result[1] << endl;
    cout << result[2] << endl;

    return 0;
}