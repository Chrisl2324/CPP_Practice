#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

string encrypt(string text, int n) {
    if (text.empty() || n <= 0) {
        return text;
    }

    for (int k = 0; k < n; ++k) {
        string result = "";
        // First append characters at odd indices
        for (int i = 1; i < text.size(); i += 2) {
            result += text[i];
        }
        // Then append characters at even indices
        for (int i = 0; i < text.size(); i += 2) {
            result += text[i];
        }
        text = result;  // Update text for the next iteration
    }

    return text;
}

string decrypt(string encryptedText, int n)
{

    return encryptedText;
}

int main(void){
    string text = "012345";
    int n = 1;
    string result = encrypt(text, n);
    cout << result << endl;

    return 0;
}