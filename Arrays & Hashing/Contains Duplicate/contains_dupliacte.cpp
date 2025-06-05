class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        int n=nums.size();
        unordered_set<int>s(nums.begin(),nums.end());
        if(s.size()<n)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};


/*
🧠 Explanation:

- We use an `unordered_set` to store all unique elements from the input vector.
- Sets do not allow duplicates, so if any duplicate exists, the size of the set will be less than the size of the vector.
- Simply compare `s.size()` with `nums.size()`.

💡 Key Insight:
- If any number appears more than once, the set will remove the duplicates.
- Hence, comparing sizes is a quick and elegant way to check for duplicates.

⏱ Time Complexity: O(n)
📦 Space Complexity: O(n)
*/
