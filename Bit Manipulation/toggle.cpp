#include <bits/stdc++.h>
using namespace std;
// int bintodec(string s){
//     int val=0
//     for(char ch:s){
        
//     }
// }
int main() {
    string s;
    int k;
    cout << "Enter number: ";
    cin >> s;
    int n=s.size();
    cout << "Enter position to toggle: ";
    cin >> k;
    string res="";
    int v=n-k;
    // int result = n ^ (1 << (k - 1));
    for(int i=0;i<n;i++){
        if(i==v){
            s[i]='0';
        }
        res+=s[i];
    }
    cout << "Number after toggling: "<< stoi(res) << endl;
}
