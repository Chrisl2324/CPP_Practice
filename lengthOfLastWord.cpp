#include <iostream>
#include <string>
#include <vector>

using namespace std;

int lengthOfLastWord(string s){
    if(s.size() == 0){
        return -1;
    }
    int start = s.size() - 1;
    int count = 0;
    while(start >=0 && isspace(s[start])){
        start--;
    }
    while(! isspace(s[start]) && start >=0){
        count++;
        start--;
    }
    return count;
}

int main(void){
    string s = "Hello World";
    int result = lengthOfLastWord(s);
    cout << result << endl;

    return 0;
}