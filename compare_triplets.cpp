#include <iostream>
#include <vector>

using namespace std;

vector<int> compareTriplets(vector<int> a, vector<int> b){
    vector<int> result(2, 0);
    int a_sum = 0;
    int b_sum = 0;
    for(int i = 0; i < a.size(); i++){
        if(a[i] > b[i]){
            a_sum +=1;
        }
        else if(a[i] < b[i]){
            b_sum +=1;
        }
    }
    result[0] = a_sum;
    result[1] = b_sum;
    return result;
}

int main(){
    vector<int> a = {1, 2, 3};
    vector<int> b = {3, 4, 5};
    vector<int> result = compareTriplets(a, b);
    cout << result[0] <<result[1] << endl;

    return 0;
}