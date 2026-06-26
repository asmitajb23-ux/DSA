#include<bits/stdc++.h>
using namespace std;

int countshortessuubarray(vector<int>&arr, int k){
    int n  = arr.size();
    int minimumlength = 0;
    int count = 0;
    
    for(int start = 0; start < n; start++){
        int sum = 0;

        for(int end = start; end < n; end++){
            sum += arr[end];
            
            if(sum == k){
                int length = end - start + 1;

                if(length < minimumlength){
                    minimumlength = length;
                    count = 1;
                }else if(length = minimumlength){
                    count++;
                }
            }
        }
    }
    return count;
}

int countlargestsubarrya(vector<int>&arr, int k){
    int n  = arr.size();
    int maxlength = 0;
    int count = 0;
    
    for(int start = 0; start < n; start++){
        int sum = 0;

        for(int end = start; end < n; end++){
            sum += arr[end];
            
            if(sum == k){
                int length = end - start + 1;

                if(length > maxlength){
                    maxlength = length;
                    count = 1;
                }else if(length = maxlength){
                    count++;
                }
            }
        }
    }
    return count;
}

int main(){
    vector<int> arr = {1, 2, 3, 4, 5, 7, 8, 9};
    int k = 9;
    
    int shortestcount = countshortessuubarray(arr, k);
    int largestcount = countlargestsubarrya(arr, k);

    cout << "Shortest subarray count " << shortestcount << endl;
    cout << "Largest subarray count " << largestcount << endl;

    return 0;
}
