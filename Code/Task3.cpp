#include <iostream>
using namespace std;

void FunctionA(int n);
void FunctionB(int n);

void FunctionA(int n){
    if (n > 15)
        return;
    cout << n << " ";
    FunctionB(n + 1);
}

void FunctionB(int n){
    if (n > 15)
        return;
    cout << n << " ";
    FunctionA(n + 1);
}

int main(){
    FunctionA(1);
    return 0;
}