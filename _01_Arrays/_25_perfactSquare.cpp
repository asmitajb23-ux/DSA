#include <iostream>
using namespace std;

bool isPerfect(int n) {
    int sum = 0;

    for(int i = 1; i <= n/2; i++) {
        if(n % i == 0) {
            sum += i;
        }
    }

    return sum == n;
}

int main() {
    int n;

    cin >> n;

    int arr[n];

    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    for(int i = 0; i < n; i++) {
        if(isPerfect(arr[i])) {
            cout << arr[i] << " ";
        }
    }

    return 0;
}