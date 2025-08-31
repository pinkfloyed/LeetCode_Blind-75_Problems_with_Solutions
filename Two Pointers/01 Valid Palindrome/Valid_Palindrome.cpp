class Solution {
public:
    bool isPalindrome(string s) {
        string t = "", p = "";
        for (char c : s) {
            if (isalnum(c)) {
                t.push_back(tolower(c));
            }
        }
        p = t;
        reverse(p.begin(), p.end());
        return (p == t);
    }
};

/*
🧠 Explanation:

- Filter out only alphanumeric characters and convert them to lowercase.
- Store them in a new string `t`.
- Create a reversed copy `p` of `t`.
- If both are the same, return `true` (palindrome); otherwise, return `false`.

⏱ Time Complexity: O(n)  
📦 Space Complexity: O(n)  
*/
