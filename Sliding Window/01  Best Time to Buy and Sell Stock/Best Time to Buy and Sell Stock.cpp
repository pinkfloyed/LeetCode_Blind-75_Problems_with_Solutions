class Solution {
public:
    int maxProfit(vector<int>& prices) {
        // Approach 1: Two-pointer method (commented)
        /*
        int l = 0, r = 1, ans = 0;
        while (r < prices.size()) {
            if (prices[r] > prices[l]) {
                ans = max(ans, prices[r] - prices[l]);
            } else {
                l = r;
            }
            r++;
        }
        return ans;
        */

        // Approach 2: Tracking minimum price
        int a = prices[0], ans = 0;
        for (int i = 1; i < prices.size(); i++) {
            if (prices[i] < a) {
                a = prices[i];
            } else if ((prices[i] - a) > ans) {
                ans = prices[i] - a;
            }
        }
        return ans;
    }
};

/*
🧠 Explanation:

- The goal is to maximize profit = (sell price - buy price).
- We need to buy at the lowest possible price before selling.
- Maintain a variable `a` for the minimum price seen so far.
- For each day:
  - If `prices[i]` < `a`, update `a`.
  - Else compute profit = `prices[i] - a` and update maximum profit.
- Return the maximum profit found.

⏱ Time Complexity: O(n)  
📦 Space Complexity: O(1)  
*/
