#include <string>
#include <string_view>
#include <iostream>

using namespace std;

string to_weird_case(string_view str) {
    string result = "";
    for(int i = 0; i < str.size(); i++){
        if(isspace(str[i]) && isupper(str[i-1])){
            result += tolower(str[i+1]);
        }
        if(i %2 == 0){
            result += toupper(str[i]);
        }
        else{
            result += str[i];
        }
    }
    return result;
}

int main(void){
    string_view str = "hello you";
    string result = to_weird_case(str);
    cout << result << endl;

    return 0;
}
