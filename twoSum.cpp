#include <stdio.h>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> twoSum(vector<int> &nums, int target){
    int i = 0;
    int j = nums.size() - 1;
    vector<int> result(2, 0);
    int sum;

    while((i != j) && (i < nums.size())){
        sum = nums[i] + nums[j];
        if(sum == target){
            result[0] = i;
            result[1] = j;
            break;
        }
        else if (sum > target){
            j--;
        }
        else{
            i++;
        }
    }
    
    return result;

}

int main(void){
    vector<int> nums = {0, 1, 2, 3};
    vector<int> result = twoSum(nums, 5);
    for(int i = 0; i < result.size(); i++){
        printf("%d", result[i]);
    }
    return 0;
}