// Selection Sort works by selecting the smallest element from the unsorted part and placing it at the correct position.
// Array:
// 5 3 2 4
// Pass 1:
// Find minimum in [5,3,2,4] → 2
// Swap with first → 2 3 5 4
// Pass 2:
// Find minimum in [3,5,4] → 3
// No swap needed → 2 3 5 4
// Pass 3:
// Find minimum in [5,4] → 4
// Swap → 2 3 4 5
// Final Answer: 2 3 4 5
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int arr[n];
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Selection Sort
    for(int i = 0; i < n-1; i++) {
        int minIndex = i;

        for(int j = i+1; j < n; j++) {
            if(arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }

        swap(arr[i], arr[minIndex]);
    }

    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
}