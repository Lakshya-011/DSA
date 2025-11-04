#include <bits/stdc++.h>
using namespace std;
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int> s(nums1.begin(), nums1.end());
        vector<int> res;
        for (int x : nums2) {
            if (s.count(x)) {
                res.push_back(x);
                s.erase(x);
            }
        }
        return res;
    }
int main() {
    vector<int> nums1 = {1, 2, 2, 1};
    vector<int> nums2 = {2, 2};
    vector<int> result = intersection(nums1, nums2);
    for (int x : result) cout << x << " ";
    cout << endl;
    return 0;
}
