#include <iostream>
#include <vector>

using namespace std;

int removeElement(vector<int>& nums, int val) {
    int st = 0;
    for(int i = 0; i < nums.size(); i++){
        if(nums[i] != val){
            nums[st] = nums[i];
            st++;
        }
    }
    return st;
}

    

int main(void){
    vector<int> nums = {1, 2, 2, 3, 3};
    int val = 2;
    int result = removeElement(nums, val);
    cout << result <<endl;

    return 0;
}