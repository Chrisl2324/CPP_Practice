#include <iostream>
#include <vector>

using namespace std;

int removeDuplicates(vector<int>& nums) {
    int st = 0;
    int i = 0;
    for(i; i <nums.size(); i++){
        if(nums[i] != nums[i + 1]){
            nums[st] = nums[i];
            st++;
        }
    }
    return st;
}

int main(void){
    vector<int> nums = {1, 1, 1, 2, 2};
    int result = removeDuplicates(nums);
    cout << result << endl;
    return 0;
}

