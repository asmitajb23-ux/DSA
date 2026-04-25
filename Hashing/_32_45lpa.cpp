// Understanding :-> You are given an array “A”; in one step select largest element of array and convert it to second largest element of the array 

// -> Tell the minimum number of steps such that all elements become equal  

// Observation :- All elements in final array will be equal to the smallest element of the array 

// Brute force solution :-> 

// -> Find largest element of array and second largest element of array -> O(N.) 

// -> Let say largest element is at index “i” -> b[i] = second largest 

// -> Keep doing this until all array elements become equal 

// -> O(N*N.)  
// -> u = 0
// while(u==0){
//   -> largest(b) 
//   -> second_largest(b) 
//   -> b[i] = second_largest 

//   -> if all array elements are equal u = 1  

// }

// Optimization. -> Use map to track frequency of each number and do the simulation efficiently for all equal numbers in 1 go 


#include<bits/stdc++.h>
using namespace std;

int minimumNumberOfStep(vector<int>& arr){
    sort(arr.begin(),arr.end());
    int n = arr.size();
    int step = 0;
    for(int i = n - 1; i > 0; i--){
        if(arr[i] != arr[i-1])

        step += (n-1);
    }

    return step;

}

int main(){
    int n;
    cin >> n;

    vector<int> arr(n);

    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    cout << minimumNumberOfStep(arr) << endl;

    return 0;
}