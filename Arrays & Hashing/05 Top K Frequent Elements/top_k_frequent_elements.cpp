// 1.  Solution_Sorting-based_Approach : 
class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
       unordered_map<int,int>m;
       vector<pair<int,int>>v;
       vector<int>ans;
       for(int i:nums)
       {
          m[i]++;
       }
       for(auto i:m)
       {
          v.push_back({i.second,i.first});
       }
       sort(v.rbegin(),v.rend());
       for(int i=0;i<k;i++)
       {
          ans.push_back(v[i].second);
       }
       return ans;
    }
};

// 2. Solution_Bucket_Sort_Approach :
class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
       unordered_map<int,int>m;
       vector<vector<int>>v(nums.size()+1);
       vector<int>ans;
       for(int i:nums)
       {
           m[i]++;
       }
       for(auto i:m)
       {
          v[i.second].push_back(i.first);
       }
       for(int i=v.size()-1;i>0;i--)
       {
          for(int j:v[i])
          {
            ans.push_back(j);
            if(ans.size()==k)
            {
                return ans;
            }
          }
       }
       return ans;
    }
};

/* Explanation 
Added two C++ solutions for the "Top K Frequent Elements" problem:

1. Sorting-based approach:
   - Counts frequencies using a hash map, then stores them in a vector of pairs.
   - Sorts the vector in descending order by frequency.
   - Time: O(n log n)
   - Space: O(n)

2. Bucket sort approach:
   - Counts frequencies and stores elements in frequency-indexed buckets.
   - Iterates from highest to lowest frequency to collect the top K elements.
   - Time: O(n)
   - Space: O(n)

The bucket sort method offers a more optimal solution in linear time.
*/
