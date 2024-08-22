#include <vector>
#include <iostream>
#include <unordered_map>

using namespace std;

int findOdd(const vector<int>& numbers){
    unordered_map<int, int> counts;
    for(auto num: numbers){
        counts[num]++;
    }
    for(const auto &pair: counts){
        if((pair.second) %2 != 0){
            return pair.first;
        }
    }
    return 0;

}

int main(void){
    const vector<int> numbers = {0, 1, 1, 0, 0, 0};
    int result = findOdd(numbers);
    cout << result << endl;

     return 0;
}