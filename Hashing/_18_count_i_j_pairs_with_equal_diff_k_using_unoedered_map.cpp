#include <bits/stdc++.h>
#include <unordered_map>
using namespace std;

int countPairsOptimized(const vector<int>& b, int k) {
    int count = 0;
    unordered_map<int, int> freqMap;
    for (int j = 0; j < b.size(); ++j) {
        int target = b[j] + k;
        if (freqMap.find(target) != freqMap.end()) {
            count += freqMap[target];
        }
        freqMap[b[j]]++;
    }
    return count;
}

int main() {
    vector<int> b = {1, 5, 3, 4, 2};
    int k = 2;
    cout << "Count of pairs: " << countPairsOptimized(b, k) << endl;
    return 0;
}
