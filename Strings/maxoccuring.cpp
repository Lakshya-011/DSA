#include <bits/stdc++.h>
using namespace std;

int main() {
    string s = "LakshyaSrivastava";
    unordered_map<char, int> freq;
    for (char c : s) freq[c]++;

    int mx=0;
    for (auto p : freq) {
        mx=max(p.second,mx);
    }
    for(auto it:freq){
        if(it.second==mx)
        cout<<it.first<<endl;
    }
    return 0;
}