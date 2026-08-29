class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        int n=nums.size();
       unordered_map<int,int>m;
       for(int i=0;i<n;i++)
       { int element=nums[i];
        if(m.find(element)!=m.end())
        {
            return true;
        } m[element]++;

       }
       return false;
 }
};