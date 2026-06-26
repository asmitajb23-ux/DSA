#include<bits/stdc++.h>
using namespace std;

int validsubarrays(vector<int> arr, int x, int y){
    int n = arr.size();
    int total = 0;
    for(int i = 0; i < n; i++){
        int countx = 0 , county = 0;
        for(int j = i; j <n; j++){
            if(arr[j]==x){
                countx++;
            }if(arr[j] == y){
                county++;
            }if(countx==county){
                total++;
            }
        }
    }
    return total;
}

int main(){
    int n;
    cin >> n;

    vector<int > arr(n);

    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    int x, y;
    cin >> x >> y;

    cout << validsubarrays(arr, x, y);

    return 0;
}