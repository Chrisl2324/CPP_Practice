#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int majorityElement(vector<int>& nums){
    std::sort(nums.begin(), nums.end());
    int n = nums.size();
    return nums[n/2];
    
}

int main(void){
    vector<int> nums = {1, 2, 2, 2, 3};
    int result = majorityElement(nums);
    cout << result << endl;

    return 0;
}