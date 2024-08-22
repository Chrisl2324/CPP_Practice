#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int findOdd(const vector<int>& numbers){
    vector<int>::size_type i = 0;
    while(i < numbers.size()){
        int current = numbers[i];
        int currentCount = count(numbers.begin(), numbers.end(), current);
        if((currentCount %2) != 0){
            return current;
        }
        else{
            i++;
        }  
    }
    return 0;
}

int main(void){
    vector<int> numbers = {0, 1, 1, 0, 0, 0};
    int result = findOdd(numbers);
    cout << result << endl;
    return 0;
}