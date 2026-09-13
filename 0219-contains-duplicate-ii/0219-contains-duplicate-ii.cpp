class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_map<int,int>m;int n =nums.size();
        int low=0;
        for(int high=0;high<n;high++)
        {  if(m.find(nums[high])!=m.end())
                { int i=high;
                   int j=m[nums[high]];
                   if(abs(i-j)<=k)
                   {
                    return true;
                   }

                }
                m[nums[high]]=high;



        }
        return false;
    }
};