#include <iostream>
#include <vector>
#include <string>

using namespace std;

bool isPalindrome(string s){
    if(s.empty()){
        return true;
    }
    string b = "";
    auto e = s.end();
    for(auto beg= s.begin(); beg != e; ++beg){
        if(isalnum(*beg)){
            b += toupper(*beg);
        }
    }
    int i = 0;
    int j = b.size() -1;
    while(i <= j){
        if(b[i] != b[j]){
            return false;
        }
        else{
            i++;
            j--;
        }
    }
    cout<< b << endl;
    return true;
}

int main(void){
    string s = "0P";
    bool result = isPalindrome(s);
    cout << result << endl;
    return 0;
}