class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int>m; int n=nums.size(); vector<int>res;
        for(int i=0;i<n;i++)
        { m[nums[i]]++;

        }
        vector<pair<int,int>>p;
        for(auto &it:m)
        {
            p.push_back({it.second,it.first});
        }
        sort(p.rbegin(),p.rend());
        int count=0;
        for(const auto&it:p)
        { if(count==k){break;}
          res.push_back(it.second);
          count++;
        }
        return res;
        
    }
};