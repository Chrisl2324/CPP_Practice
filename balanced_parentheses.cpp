#include <stack>
#include <iostream>
#include <string>

using namespace std;

bool isValid(string s) {
    stack<char> myStack;
    for (char c : s) {
        if (c == '(' || c == '{' || c == '[') {
            myStack.push(c);  // Push opening brackets onto the stack
        } else {
            if (myStack.empty()) {
                return false;  // No matching opening bracket
            }
            char current = myStack.top();  // Get the top element
            myStack.pop();  // Remove the top element
            if ((current == '(' && c != ')') || 
                (current == '{' && c != '}') || 
                (current == '[' && c != ']')) {
                return false;  // Mismatched pair
            }
        }
    }
    return myStack.empty();  // If stack is empty, all brackets were matched
}

int main(void) {
    string s = "[{()}]";
    bool result = isValid(s);
    cout << (result ? "True" : "False") << endl;  // Print True or False based on the result

    return 0;
}
