class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int>s(nums.begin(),nums.end());
        int l=0;
        for(int i:s)
        {
            if(s.find(i-1)==s.end())
            {
                int c=1;
                while(s.find(i+c)!=s.end())
                {
                    c++;
                }
                l=max(l,c);
            }
        }
        return l;
    }
};

