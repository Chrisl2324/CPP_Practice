#include <string>
#include <vector>
#include <iostream>

template <typename T> std::vector<T> uniqueInOrder(const std::vector<T>& iterable){
    std::vector<T> result;
    if(iterable.empty()){
        return result;
    }
    result.push_back(iterable[0]);
    for(int i = 1; i < iterable.size(); i++){
        if((iterable[i] != (iterable[i-1]))){
            result.push_back(iterable[i]);
        }
        
}
    return result;
}

std::vector<char> uniqueInOrder(const std::string& iterable){
    std::vector<char> result;
    if(iterable.empty()){
        return result;
    }
    result.push_back(iterable[0]);
    for(int i = 1; i < iterable.size(); i++){
        if(iterable[i] != iterable[i-1]){
            result.push_back(iterable[i]);
        }

    }
    return result;
}

int main(void){
    const std::string iterable = "AAABBBCCC";
    std::vector<char> result = uniqueInOrder(iterable);
    for(char character: result){
        std::cout << character << std::endl;
    }

    return 0;
}