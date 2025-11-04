#include <bits/stdc++.h>
using namespace std;

string removeDuplicates(string &s)
{
    vector<int> ch(256, 0);

    string ans = "";

    for (char c : s) {
      
        if (ch[c] == 0) {
            ans.push_back(c);
            ch[c]++;
        }
    }
    return ans;
}
int main()
{
    string s = "lakshyasrivastava";
    cout << removeDuplicates(s) << endl;
    return 0;
}