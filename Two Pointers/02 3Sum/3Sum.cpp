class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> v;
        set<vector<int>> s;
        int n = nums.size();
        sort(nums.begin(), nums.end());
        
        for (int i = 0; i < n - 2; i++) {
            int l = i + 1, h = n - 1;
            while (l < h) {
                int sum = nums[i] + nums[l] + nums[h];
                if (sum < 0) {
                    l++;
                } else if (sum > 0) {
                    h--;
                } else {
                    s.insert({nums[i], nums[l], nums[h]});
                    l++;
                    h--;
                }
            }
        }
        
        for (auto i : s) {
            v.push_back(i);
        }
        return v;
    }
};

/*
🧠 Explanation:

- First, sort the array to simplify duplicate handling and use two-pointer search.
- Iterate through each element (nums[i]) and use two pointers (l, h) to find pairs
  such that nums[i] + nums[l] + nums[h] == 0.
- If sum < 0 → move left pointer up.
- If sum > 0 → move right pointer down.
- If sum == 0 → store triplet in a set to avoid duplicates, then move both pointers.
- Finally, convert the set into the result vector.

⏱ Time Complexity: O(n^2)  
📦 Space Complexity: O(n)  (for the set of unique triplets)  
*/
