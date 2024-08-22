#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(void){

    vector<string> strs;
    string i;
    cout << "Please enter some strings: " <<endl;
    while(cin >> i){
        strs.push_back(i);
    }
    for(int j =0; j < strs.size(); j++){
        cout << strs[j] << endl;
    }
    return 0;
    



}