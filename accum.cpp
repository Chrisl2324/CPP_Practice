#include <string>
#include <iostream>

class Accumul
{
public:
    static std::string accum(const std::string &s){
        std::string result = "";
        int count = 0;
        for(int i = 0; i <s.size(); i++){
            if(i > 0){
                result += "-";
            }
            result += std::toupper(s[i]);
            result += std::string(i, std::tolower(s[i]));
    
        }
        return result;
    }
};

int main(void){
    std::string s = "abcd";
    Accumul *a = new Accumul;
    std::string result = a->accum(s);
    std::cout<< result << std::endl;

    return 0;
}