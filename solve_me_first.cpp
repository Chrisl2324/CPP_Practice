#include <iostream>

using namespace std;

int add_two(int num1, int num2){
    int solution;
    solution = num1 + num2;
    return solution;
}

int main(){
    int num1, num2;
    int sum;
    cin>>num1>>num2;
    sum = add_two(num1, num2);
    cout<<sum;

    return 0;
}