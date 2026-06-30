// We repeatedly compare adjacent elements and swap them if they are in the wrong order
// Array:
// 5 3 2 4

// Pass 1:

// 5 > 3 → swap → 3 5 2 4
// 5 > 2 → swap → 3 2 5 4
// 5 > 4 → swap → 3 2 4 5

// Pass 2:

// 3 > 2 → swap → 2 3 4 5
// 3 < 4 → no swap

// Pass 3:

// Already sorted → stop

//  Final Answer: 2 3 4 5


#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int arr[n];
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Bubble Sort
    for(int i = 0; i < n-1; i++) {
        for(int j = 0; j < n-i-1; j++) {
            if(arr[j] > arr[j+1]) {
                swap(arr[j], arr[j+1]);
            }
        }
    }

    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
}