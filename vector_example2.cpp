#include <iostream>
#include <vector>

using namespace std;

void sum(vector<int> &ints){
    int i = 0;
    int j = ints.size()-1;
    int currentSum;
    while(i != j){
        currentSum = ints[i] + ints[j];
        cout << currentSum << endl;
        i++;
        j--;

    }
}

int main(void){
    vector<int> ints;
    int currentNumber;
    cout << "Please enter some integers separated by space: " << endl;
    while(cin >> currentNumber){
        ints.push_back(currentNumber);
    }
    sum(ints);
    return 0;
}

