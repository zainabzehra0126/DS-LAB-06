#include <iostream>
using namespace std;

void FunctionA(int n, int sum, int count);
void FunctionB(int n, int sum, int count);

void FunctionA(int n, int sum, int count){
    if (n > count)
        return;

    sum = sum + n;
    cout << sum << " ";

    FunctionB(n + 1, sum, count);
}

void FunctionB(int n, int sum, int count){
    if (n > count)
        return;

    sum = sum + n;
    cout << sum << " ";

    FunctionA(n + 1, sum, count);
}

int main(){
    int count;
    cout << "How many numbers? ";
    cin >> count;

    FunctionA(1, 0, count);

    return 0;
}