class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int n=nums.size();
        int low=0; int ans=INT_MAX;int sum=0;
        for(int high=0;high<n;high++)
        {
           sum+=nums[high];
            
            while(sum>=target)
            { 
             sum-=nums[low];
             int  len=high-low+1;
             ans=min(ans,len);
             low++;


            }

        }
        return ans==INT_MAX?0:ans;
    }
};