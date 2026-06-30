#include<iostream>
using namespace std;
int multi(int n){
    if(n==0||n==1){
        return 1;

    }
    return n*multi(n-1);
}
int main(){
    int n;
    cin >> n;
    cout << multi(n);
    return 0;
}