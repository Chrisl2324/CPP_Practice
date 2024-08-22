#include <string>
#include <iostream>

using namespace std;

string even_or_odd(int number) 
{
    if(number % 2 == 0){
        return "Even";
    }
  return "Odd";
}

int main(void){
    int number = 2;
    string result = even_or_odd(number);
    cout << result << endl;
    return 0;
}