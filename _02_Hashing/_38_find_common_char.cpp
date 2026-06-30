#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<string> words{"bella", "label", "roller"}; 

    vector<int> freq(26, 0);

    for (char c : words[0]) {
        freq[c - 'a']++;
    }

    for (int i = 1; i < words.size(); i++) {
        vector<int> temp(26, 0);

        for (char c : words[i]) {
            temp[c - 'a']++;
        }

        for (int j = 0; j < 26; j++) {
            freq[j] = min(freq[j], temp[j]);
        }
    }

    for (int i = 0; i < 26; i++) {
        while (freq[i] > 0) {
            cout << char('a' + i) << " ";
            freq[i]--;
        }
    }

    return 0;
}