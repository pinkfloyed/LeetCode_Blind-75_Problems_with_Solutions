class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n=nums.size();
        unordered_map<int,int>m;
        for(int i=0;i<n;i++)
        {
            int d=target-nums[i];
            if(m.find(d)!=m.end())
            {
                return {m[d],i};
            }
            m.insert({nums[i],i});
        }
        return {};
    }
};

/*
🧠 Explanation:

- Use a hash map to store previously seen numbers and their indices.
- For each number, calculate `target - current number` to find the complement.
- If complement is in the map, return the current index and the complement’s index.

⏱ Time Complexity: O(n)
📦 Space Complexity: O(n)
*/
