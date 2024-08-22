#include <vector>
#include <iostream>
#include <numeric>
#include <algorithm>

using namespace std;

long queueTime(vector<int> customers,int n){
    long result = 0;
    if(n == 0){
        return 0;
    }
    if(n==1){
        return accumulate(customers.begin(), customers.end(), 0.0);
    }
    if(n > customers.size()){
        return *max_element(customers.begin(), customers.end());
    }
    vector<int> tills(n, 0);
    for(int time: customers){
        *min_element(tills.begin(), tills.end()) += time;
        }
    return *max_element(tills.begin(), tills.end());
}

int main(void){
    vector<int> customers = {5, 4, 3};
    int n = 2;
    long result = queueTime(customers, n);
    cout << result << endl;

    return 0;
}