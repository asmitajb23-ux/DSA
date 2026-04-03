#include<bits/stdc++.h>
#include<map>
using namespace std;

int main(){
    map<int , int> Nocount;

    Nocount[2] = 34;
    Nocount[3] = 87;
    Nocount[4] = 56;

    for(auto it: Nocount){
        cout << it.first << "->" << it.second << endl;
    }
    return 0;
}