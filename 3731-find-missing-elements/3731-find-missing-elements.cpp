class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        int maxel=*max_element(nums.begin(),nums.end());
        int minel=*min_element(nums.begin(),nums.end());
        unordered_set<int> s;
        for(auto el : nums)
        { s.insert(el);

        }
        vector <int> ans;
        for(int i=minel;i<=maxel;i++)
        { if(s.find(i)==s.end())
        {
            ans.push_back(i);
        }
        }
        return ans;
    }
};