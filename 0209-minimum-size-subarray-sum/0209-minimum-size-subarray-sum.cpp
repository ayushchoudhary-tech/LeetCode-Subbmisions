class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int res=INT_MAX; int low=0,high=0,n=nums.size();int sum=0;
     for(int high=0;high<n;high++)
     {
        sum+=nums[high];
        while(sum>=target)
        {   int len=high-low+1;

            res=min(len,res);
            sum=sum-nums[low];
            low++;

        }
     }
      return res==INT_MAX?0:res;
    }
};