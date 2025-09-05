class Solution {
public:
    int maxArea(vector<int>& heights) {
        int l = 0, r = heights.size() - 1;
        int ans = 0;
        
        while (l < r) {
            int c = (r - l) * min(heights[l], heights[r]);
            ans = max(ans, c);
            
            if (heights[l] <= heights[r]) {
                l++;
            } else {
                r--;
            }
        }
        return ans;
    }
};

/*
🧠 Explanation:

- Use two pointers, one at the beginning (`l`) and one at the end (`r`).
- The area formed is `(r - l) * min(height[l], height[r])`.
- Update the maximum area found so far.
- Move the pointer pointing to the shorter line inward, since the limiting factor is the shorter line.
- Repeat until both pointers meet.

⏱ Time Complexity: O(n)  
📦 Space Complexity: O(1)  
*/
