class Solution {
public:    
      int kadanemax(vector<int>& nums,int n){
        int maxsum=nums[0];
        int res=nums[0];
        for(int i=1;i<n;i++)
        {
         maxsum=max(nums[i],maxsum+nums[i]);
            res=max(res,maxsum);
            }
         return res;
        }
        int kadanemin(vector<int>& nums,int n)
        {
            int minsum=nums[0];
            int res=nums[0];
            for(int i=1;i<n;i++)
            {
                minsum=min(minsum+nums[i],nums[i]);
                res=min(res,minsum);
            }
            return  res;
        }
    int maxSubarraySumCircular(vector<int>& nums) {
        int n=nums.size();
        int sum=accumulate(nums.begin(),nums.end(),0);
        int maxsum=kadanemax(nums,n);
        int minsum=kadanemin(nums,n);
        if(maxsum>0){
            int circularsum=sum-minsum;
            return max(maxsum,circularsum);
        }
        return maxsum;

    }
};