#include <iostream>
#include <array>
#include <algorithm>

using namespace std;

void int_array(){
    int n;
    cout << "Enter the size of the array:" << endl;
    cin >> n;
    int nums[n];
    cout << "Please enter " << n << " nums:" << endl;
    int num;
    for(int i = 0; i < n; i++){
        cin >> num;
        nums[i] = num;
    }
    sort(nums, nums + n);
    int *ptrMax = &nums[n-1];
    cout << "Largest number is: "  << *ptrMax << endl;
    
}

int main(void){
    int_array();
    return 0;
}