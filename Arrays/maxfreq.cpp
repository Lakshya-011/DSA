#include <bits/stdc++.h>
using namespace std;

    int maxFrequencyElements(vector<int>& nums) {
        unordered_map<int,int> mp;
        for(int x : nums) mp[x]++;
        int mx = 0, sum = 0;
        for(auto &p : mp) mx = max(mx, p.second);
        for(auto &p : mp) if(p.second == mx) sum += p.second;
        return sum;
    }

int main() {
    vector<int> nums = {1, 2, 2, 3, 1, 4};
    cout <<maxFrequencyElements(nums) << endl;
    return 0;
}
