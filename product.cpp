#include <iostream>

using namespace std;

int product(int num1, int num2){
    return num1 * num2;
}

int main(){
    int num1, num2;
    cout<<"Please enter two numbers: \n"<<endl;
    cin>> num1 >> num2;
    int result = product(num1, num2);
    cout<< "The product is: "<<result<<endl;

    return 0;
}