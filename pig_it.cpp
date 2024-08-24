#include <string>
#include <iostream>
#include <vector>

using namespace std;

vector<string> word_array(string str)
{
    vector<string> words;
    string word = "";
    for(char ch: str){
        if(isspace(ch)){
            if(!word.empty()){
                words.push_back(word);
                word = "";
            }
        }
        else{
            word += ch;
        }
    }
    if(!word.empty()){
        words.push_back(word);
    }
    return words;
}

string pig_it(string str){
    vector<string> words = word_array(str);
    string result = "";
    for(size_t i = 0; i < words.size(); i++){
        string word = words[i];
        if(isalpha(word[0])){
            result += word.substr(1) + word[0] + "ay";
        }
        else{
            result += word;
        }
        if(i < words.size() -1){
            result += " ";
        }
    }
    return result;
}

int main(void){
    string str = "hello world";
    string result = pig_it(str);
    cout << result << endl;

    return 0;
}