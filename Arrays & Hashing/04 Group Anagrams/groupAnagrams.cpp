// 1. Solution_Approach_sorting_Based

class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
       vector<vector<string>>ans;
       unordered_map<string,vector<string>>m;
       for(string s:strs)
       {
          string t=s;
          sort(t.begin(),t.end());
          m[t].push_back(s);
       } 
       for(auto i:m)
       {
          ans.push_back(i.second);
       }
       return ans;
    }
};
// Time Complexity : O(m × n log n)  
// Space Complexity : O(m × n)



// 2. Solution_Approach_count_Based
class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>>m;
        for(string &s:strs)
        {
            vector<int>c(26,0);
            for(char ch:s)
            {
                c[ch-'a']++;
            }
            string k;
            for(int n:c)
            {
                k+=" "+to_string(n);
            }
            m[k].push_back(s);
        }
        vector<vector<string>>ans;
        for(auto &i:m)
        {
            ans.push_back(i.second);
        }
        return ans;
    }
};

// Time Complexity : O(m × n) 
// Space Complexity : O(m × n)
