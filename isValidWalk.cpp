#include<vector>
#include<algorithm>
#include <iostream>

using namespace std;

bool isValidWalk(vector<char> walk) {
    int n = count(walk.begin(), walk.end(), 'n');
    int s = count(walk.begin(), walk.end(), 's');
    int e = count(walk.begin(), walk.end(), 'e');
    int w = count(walk.begin(), walk.end(), 'w');
    int total = n + s + e + w;
    return ((n == s) && (e == w) && ( total == 10));
}

int main(void){
    vector<char> walk = {'n','s','n','s','n','s','n','s','n','s','n','s'};
    bool result = isValidWalk(walk);
    cout << result << endl;
    return 0;
    
}