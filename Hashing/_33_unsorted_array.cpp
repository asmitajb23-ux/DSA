#include<bits/stdc++.h>
using namespace std;

int frequence(vector<int>& a, int x){
    int count = 0;

    for(int i = 0; i < a.size(); i++){
        if(a[i] == x){
            count ++;
        }
    } 
    return count;
}

int main(){
    vector<int> a = {1, 2, 3, 2, 2};
    int x = 2;

    cout << frequence(a, x);

}