#include <utility>
#include <vector>
#include <algorithm>
#include <iostream>

std::pair<int, int> min_max(std::vector<int>& arr)
{
    int max = *std::max_element(arr.begin(), arr.end());
    int min = *std::min_element(arr.begin(), arr.end());
    return {min, max};
}
int main(void){
    std::vector<int> arr = {2, 4, 1, 5};
    std::pair<int, int> result = min_max(arr);
    std::cout << "Min is: " << result.first << std::endl;
    std::cout << "Max is: " << result.second << std::endl;
    
    return 0;
}