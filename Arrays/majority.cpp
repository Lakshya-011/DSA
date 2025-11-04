#include <bits/stdc++.h>
using namespace std;

int majorityElement(vector<int>& nums) {
    int c = 0;
    int ans = 0;
    for (int i = 0; i < nums.size(); i++) {
        if (c == 0)
            ans = nums[i];
        if (nums[i] == ans)
            c += 1;
        else
            c -= 1;
    }
    return ans;
}

int main() {
    vector<int> nums = {2, 2, 1, 1, 1, 2, 2};
    cout << majorityElement(nums) << endl;
    return 0;
}
