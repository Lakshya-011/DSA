#include <bits/stdc++.h>
using namespace std;

int main() {
    string s = "Hello my name is lakshya";
    int count = 0;
    bool inWord = false;
    for (char c : s) {
        if (isspace(c)) {
            inWord = false;
        } else if (!inWord) {
            count++;
            inWord = true;
        }
    }
    cout << count << endl;
    return 0;
}
