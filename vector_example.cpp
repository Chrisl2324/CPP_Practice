#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main(void){
    vector<string> words;
    cout << "Please enter string separated by spaces: " << endl;
    string word;
    while(cin >> word){
        words.push_back(word);
    }
    for(int i = 0; i < words.size(); i++){
        for(int j = 0; j <words[i].size(); j++){
            words[i][j] = toupper(words[i][j]);
        }
    }

    for(string word: words){
        cout << word << endl;
    }

    return 0;
}