#include <iostream>
#include <stdio.h>

using namespace std;

int foo(int a);

int main(){
    int a = 3;
    printf("%d", foo(a));

}

int foo(int a){
    return a;
}