#include <iostream>
using namespace std;

int fact(int n) {
    int f = 1;
    for(int i = 1; i <= n; i++) {
        f *= i;
    }
    return f;
}

bool isStrong(int num) {
    int original = num;
    int sum = 0;

    while(num != 0) {
        int rem = num % 10;
        sum += fact(rem);
        num /= 10;
    }

    return sum == original;
}

int main() {
    int n;

    cin >> n;

    int arr[n];

    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    for(int i = 0; i < n; i++) {
        if(isStrong(arr[i])) {
            cout << arr[i] << " ";
        }
    }

    return 0;
}