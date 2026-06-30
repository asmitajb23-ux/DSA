#include<bits/stdc++.h>
using namespace std;

int largestsubarraysum(const vector<int> arr, int k){
    int n = arr.size();
    int maxlength = 0;
    int result;

    for(int i = 0; i < n; i++){
        int sum = 0;
        for(int j = i; j < n ; j++){
            sum += arr[j];
            if(k == sum && (j - i + 1) > maxlength){
                maxlength = max(maxlength, j - i +1);

            }
        }
                return maxlength;
    }
}

int main(){
    vector<int> arr = {1, 2, 3, 4, 7, 5, 6};

    int k = 11;
    int result = largestsubarraysum(arr, k);
    if(result > 0){
        cout << result << endl;
    }else{
        cout << "No found" << endl;
    }
}