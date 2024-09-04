#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> ans;
        unordered_map<int,int> s;
        for(int i=0;i<nums.size();i++){
            if(s.find(target-nums[i]) != s.end()){
                ans.push_back(i);
                ans.push_back(s[target-nums[i]]);
                return ans;
            }
            else{
                s[nums[i]]=i;
            }
        }
        return ans;
    }
};

int main() {
    Solution s;
    vector<int> nums = {2, 7, 11, 15};
    int target = 9;
    vector<int> ans = s.twoSum(nums, target);
    for (int i = 0; i < ans.size(); i++) {
        cout << ans[i] << " ";
    }
    return 0;
}