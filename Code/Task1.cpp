#include <iostream>
using namespace std;

void permutation(char arr[], int start, int n){
    if (start == n){
        for (int i = 0; i < n; i++)
            cout << arr[i];
        cout << " ";
        return;
    }

    for (int i = start; i < n; i++){
        swap(arr[start], arr[i]);
        permutation(arr, start + 1, n);
        swap(arr[start], arr[i]);
    }
}

int main(){

    int n;
    cout << "Enter n: ";
    cin >> n;

    if (n < 1 || n > 26)
        return 0;

    char arr[26];

    for (int i = 0; i < n; i++)
        arr[i] = 'a' + i;

    cout << "n = " << n << endl;
    permutation(arr, 0, n);

    return 0;
}