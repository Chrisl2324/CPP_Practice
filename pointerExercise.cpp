#include <iostream>

using namespace std;

void pointer_exercise(){
    int a, b;
    cout << "Please enter two integers:" << endl;
    cin >> a >> b;
    int *ptrA = &a;
    int *ptrB = &b;
    cout << "Pointer A Value is: " << *ptrA  << " Stored at: " << ptrA << endl;
    cout << "Pointer B Value is: "<< *ptrB << " Stored at: " << ptrB<< endl;
}

int main(void){
    pointer_exercise();
    return 0;
}