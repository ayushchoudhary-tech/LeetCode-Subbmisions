class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int res=INT_MAX; int low=0,high=0,n=nums.size();int sum=0;
      while(high<n)
      { sum+=nums[high];
       while(sum>=target)
       { int length=high-low+1;
        res=min(res,length);
        sum-=nums[low];
        low++;

       }
       high++;


      }
      return res==INT_MAX?0:res;
    }
};