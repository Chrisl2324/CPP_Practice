#include<string>
#include<unordered_map>
#include<algorithm>
#include<assert.h>

using namespace std;

bool scramble(const string& s1, const string& s2){
    unordered_map<char, int> count1;
    unordered_map<int, char> count2;
    for(auto &character: s1){
        count1[character]++;
    }
    for(auto &character: s2){
        count2[character]++;
    }
    for(auto &character: s2){
        if(count2[character] > count1[character]){
            return false;
        }

    }
    return true;
  
}
int main(void){
    assert(scramble("hellllllo", "hello") == true);
    return 0;
    
}