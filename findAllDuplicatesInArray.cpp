#include<bits/stdc++.h>

using namespace std;

class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        map<int,int> mp;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }
        vector<int> duplicates;
        for(auto& pair:mp){
            if(pair.second>1){
                duplicates.push_back(pair.first);
            }
        }
        return duplicates;
    }
};

int main() {
    Solution s;
    vector<int> nums = {4,3,2,7,8,2,3,1};
    vector<int> duplicates = s.findDuplicates(nums);
    for(int i=0;i<duplicates.size();i++){
        cout<<duplicates[i]<<" ";
    }
    return 0;
}