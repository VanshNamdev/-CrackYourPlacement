#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
       unordered_map<int, int> remainder_count;
        remainder_count[0] = 1;
        int count = 0;
        int prefix_sum = 0;
    
        for (int num : nums) {
            prefix_sum += num;
            int remainder = prefix_sum % k;
            if (remainder < 0) remainder += k;
            if (remainder_count.find(remainder) != remainder_count.end()) {
                count += remainder_count[remainder];
        }
            remainder_count[remainder]++;
        }
    return count;
    }
};

int main() {
    Solution s;
    vector<int> nums = {4,5,0,-2,-3,1};
    int k = 5;
    cout << s.subarraysDivByK(nums, k) << endl;
    return 0;
}