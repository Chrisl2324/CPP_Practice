#include <iostream>
#include <vector>

using namespace std;

int main(void){
    int nums[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    int *e = end(nums);
    for(int *beg = begin(nums); beg != e; ++beg){
        cout << *beg << endl;
    }
    return 0;
}