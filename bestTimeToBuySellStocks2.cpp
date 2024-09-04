#include<bits/stdc++.h>

using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int buyPrice = prices[0];
        int profit = 0;

        for (int i = 1; i < prices.size(); i++) {
            if (buyPrice > prices[i]) {
                buyPrice = prices[i];
            }
            profit+=prices[i]-buyPrice;
            cout<<profit<<endl;
            buyPrice=prices[i];
        }

        return profit;        
    }
};

int main() {
    Solution s;
    vector<int> prices = {7, 1, 5, 3, 6, 4};
    cout << s.maxProfit(prices) << endl;
    return 0;
}