#include <string>
#include <iostream>

using namespace std;

unsigned hamming(const string &a, const string &b){
    unsigned count = 0;
    for(int i = 0; i < a.size(); i++){
        if(a[i] != b[i]){
            count++;
        }
    }
    return count;
}

int main(){
    string a = "Hello";
    string b = "Hella";
    unsigned result = hamming(a, b);
    cout << result << endl;
}