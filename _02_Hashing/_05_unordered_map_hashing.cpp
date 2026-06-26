#include<bits/stdc++.h>
#include<unordered_map>
using namespace std;

int main(){
    unordered_map<string , int> colourcount;

    colourcount["GREY"] = 15;
    colourcount["BLUE"] = 34;

    for(auto it: colourcount){
        cout << it.first << " : " << it.second << endl;
    }
    return 0;
}