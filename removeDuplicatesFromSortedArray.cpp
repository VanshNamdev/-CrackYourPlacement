#include <bits/stdc++.h>

using namespace std;    

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        map<int,int> mp;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }
        cout<<mp.size();
        int i=0;
        for (const auto& pair : mp) {
        int key = pair.first;
        nums[i]=key;
        i++;
        }

        return mp.size();
    }
};

int main() {
    Solution s;
    vector<int> nums = {1, 1, 2};
    cout << s.removeDuplicates(nums) << endl;
    return 0;
}