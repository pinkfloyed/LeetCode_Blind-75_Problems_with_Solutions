class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char> st;
        int l = 0, ans = 0;
        for (int i = 0; i < s.length(); i++) {
            while (st.find(s[i]) != st.end()) {
                st.erase(s[l]);
                l++;
            }
            // Add current character to window
            st.insert(s[i]);
            ans = max(ans, i - l + 1);
        }
        return ans;
    }
};

/*
🧠 Explanation:

- Use a sliding window with two pointers (`l`, `i`) to track current substring.
- Maintain a set to store unique characters in the current window.
- If a duplicate is found, shrink the window from the left until it’s removed.
- Update `ans` with the maximum window size found.
- Return `ans` as the length of the longest substring without repeating characters.

⏱ Time Complexity: O(n)  
   Each character is inserted and removed from the set at most once.  
📦 Space Complexity: O(min(n, charset))  
   In the worst case, store all unique characters of the input (bounded by ASCII size).  
*/
