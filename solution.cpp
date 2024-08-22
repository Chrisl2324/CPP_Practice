#include <string>
#include <vector>
#include<iostream>

using namespace std;

vector<string> solution(const string &s)
{
    vector<string> result;
    string current = "";
    bool isOdd = s.size() % 2 != 0;
    int i = 0;
    while(i < s.size()){
        result.push_back(s.substr(i, 2));
        i+=2;
    }
    return result; // Your code here
}

int main(void){
    const string s = "fair";
    vector<string> result = solution(s);
    for(string word: result){
        cout << word << endl;
    }
    return 0;
}