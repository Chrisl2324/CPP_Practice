#include <string>
#include <iostream>

using namespace std;

string add(const string& a, const string& b) {
    int int_a = 0, int_b = 0;

    // Convert string a to int, if it's not empty
    if (!a.empty()) {
        int_a = stoi(a);
    }

    // Convert string b to int, if it's not empty
    if (!b.empty()) {
        int_b = stoi(b);
    }

    int result = int_a + int_b;
    return to_string(result);  // Return the sum as a string
}

int main(void) {
    string a = "";
    string b = "35";
    string result = add(a, b);
    cout << result << endl;  // Expected output: "35"

    return 0;
}
