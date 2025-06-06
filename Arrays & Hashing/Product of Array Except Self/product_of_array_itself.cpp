// 🔁 Brute Force: O(n²)
class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> v(n);
        for (int i = 0; i < n; i++) {
            int m = 1;
            for (int j = 0; j < n; j++) {
                if (i != j) {
                    m *= nums[j];
                }
            }
            v[i] = m;
        }
        return v;
    }
};


// ⚡ Optimized Prefix-Suffix Product: O(n) Time, O(1) Extra Space
class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size(), m = 1;
        vector<int> v(n, 1);
        
        // Prefix product
        for (int i = 1; i < n; i++) {
            v[i] = v[i - 1] * nums[i - 1];
        }

        // Suffix product and final result
        for (int i = n - 1; i >= 0; i--) {
            v[i] *= m;
            m *= nums[i];
        }

        return v;
    }
};


/* Explanation

#### 1. Brute Force (O(n²))
- Loop through every element, multiplying all others.
- Time Complexity : O(n²)
- Space Complexity: O(n)

#### 2. Optimized Prefix-Suffix (O(n))
- Use two passes: prefix and suffix product multipliers.
- Time Complexity : O(n)
- Space Complexity : O(1) extra (excluding output array)
*/
