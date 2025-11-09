#include <bits/stdc++.h>
using namespace std;

int main() {
    int num, n;
    cout << "Enter number: ";
    cin >> num;
    cout << "Enter bit position: ";
    cin >> n;

    if (num & (1 << (n - 1)))
        cout << "Bit is Set" << endl;
    else
        cout << "Bit is Unset" << endl;

    return 0;
}
