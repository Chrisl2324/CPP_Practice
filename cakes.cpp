#include <unordered_map>
#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

using Ingredients = unordered_map<string, int>;

int cakes(const Ingredients& recipe, const Ingredients& available) {
  int min_cake = 1000000;

  for(const auto& ingredient: recipe){
    const string& item = ingredient.first;
    int amount = ingredient.second;

    if(available.find(item) == available.end()){
        return 0;
    }
    else{
        int count = available.at(item) / amount;
        min_cake = min(count, min_cake);
    }
  }
  return min_cake;
}