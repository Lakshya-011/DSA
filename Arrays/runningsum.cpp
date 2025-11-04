#include<bits/stdc++.h>
using namespace std;
 vector<int> runningSum(vector<int>& nums) {
        vector<int> temp;
        int s=0;
        for(int i=0;i<nums.size();i++){
           s+=nums[i];
            temp.push_back(s);
        }
        return temp;
    }
int main(){
      vector<int> nums = {1, 2, 3, 4, 5};
    vector<int> result = runningSum(nums);

    cout << "Running Sum: ";
    for (int x : result) {
        cout << x << " ";
    }
    cout << endl;

    return 0;
}