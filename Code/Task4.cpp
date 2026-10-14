#include <iostream>
using namespace std;

void Sequence(int n, int sum, int count){
    if (n > count)
        return;

    sum = sum + n;
    cout << sum << " ";
    Sequence(n + 1, sum, count);
}

int main(){
    int count;
    cout << "How many numbers? ";
    cin >> count;

    Sequence(1, 0, count);

    return 0;
}