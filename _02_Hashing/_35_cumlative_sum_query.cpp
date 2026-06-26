#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;

    vector<int> arr(N);
    for(int i = 0; i < N; i++) {
        cin >> arr[i];
    }

    //  Build prefix sum array
    vector<long long> prefix(N);
    prefix[0] = arr[0];

    for(int i = 1; i < N; i++) {
        prefix[i] = prefix[i-1] + arr[i];
    }

    int Q;
    cin >> Q;

    while(Q--) {
        int i, j;
        cin >> i >> j;

        if(i == 0) {
            cout << prefix[j] << endl;
        } else {
            cout << prefix[j] - prefix[i-1] << endl;
        }
    }

    return 0;
}