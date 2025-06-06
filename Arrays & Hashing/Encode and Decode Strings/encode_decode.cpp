class Solution {
public:
    // Encodes a list of strings to a single string.
    string encode(vector<string>& strs) {
        string ans;
        for (string s : strs) {
            ans += to_string(s.length()) + '#' + s;
        }
        return ans;
    }

    // Decodes a single string to a list of strings.
    vector<string> decode(string s) {
        vector<string> result;
        int i = 0;
        while (i < s.length()) {
            int j = i;
            while (s[j] != '#') {
                j++;
            }
            int len = stoi(s.substr(i, j - i));
            i = j + 1;
            result.push_back(s.substr(i, len));
            i += len;
        }
        return result;
    }
};

/*
🧠 Explanation:
- The encode function builds a string of format "<length>#<string>" for each input.
- The decode function reads length until '#' to extract exact string portions.

⏱ Time Complexity: O(N) where N is total characters across all strings
📦 Space Complexity: O(N)
*/
