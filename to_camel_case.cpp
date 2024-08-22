#include <string>
#include <iostream>
#include <cassert>

using namespace std;


string to_camel_case(string text) {
    if(text.empty()){
        return "";
    }
    string result = "";
    for(int i = 0; i < text.size(); i++){
        if((text[i] == '-') || (text[i] == '_')){
            i++;
            result += toupper(text[i]);
        }
        else{
            result += text[i];  
        }
    }
    return result;
}

int main(void){
    assert(to_camel_case("") == "");
    assert(to_camel_case("the_stealth_warrior") == "theStealthWarrior");
    assert(to_camel_case("The-Stealth-Warrior") == "TheStealthWarrior");
    assert(to_camel_case("A-B-C")==("ABC"));

    return 0;
}