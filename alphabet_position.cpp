#include <iostream>
#include <vector>
#include <string>
#include <unordered_map>

using namespace std;

string alphabet_position(const string &text) {
    string letters = "abcdefghijklmnopqrstuvwxyz";
    unordered_map<char, int> alphabet;
    for(int i = 1; i <= 26; i++){
        alphabet[letters[i]] =  i;
    }
    string result = "";
    for(int i =0; i < text.size(); i++){
        if(isalpha(text[i])){
            char lowerCase = tolower(text[i]);
            result += to_string(alphabet[lowerCase]) + " ";
        }
    }
  return result;
}

int main(void){
    string text = "Hello";
    string result = alphabet_position(text);
    cout << result << endl;
    return 0;
}