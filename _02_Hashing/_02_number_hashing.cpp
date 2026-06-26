#include<bits/stdc++.h>
using namespace std;

int main(){
    int n = 7;
    int arr[] = {1,3,5,6,7,6,3};
    
    int hasha[10] ={0};

    for( int i = 0; i < n; i++){
        hasha[arr[i]]++;
    }

    for(int i = 0; i < 10; i++){
        if(hasha[i]!=0){
            cout << "Number " << i << " Appears " << hasha[i] << " times " << endl;
        }
    }
    return 0;
}