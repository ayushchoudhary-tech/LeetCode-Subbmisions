class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        unordered_set<int>s;
        for(auto el:nums)
        { if(s.find(el)!=s.end())
        {
            return el;
        } s.insert(el);

        }
        return -1;
    }
};