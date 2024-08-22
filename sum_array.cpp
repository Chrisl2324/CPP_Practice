#include <iostream>
#include <vector>

using namespace std;

int sum_vector(vector<int> arr){
    int sum = 0;
    for(int i = 0; i < arr.size(); i++){
        sum += arr[i];
    }
    return sum;
}

int main(){
    vector<int> arr = {1, 2, 3};
    int result = sum_vector(arr);
    cout << result << endl;

    return 0;

}