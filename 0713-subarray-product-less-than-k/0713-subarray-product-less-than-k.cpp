class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        int n=nums.size(); int low=0; int ans=0; int pro=1;
         if(k<=1){return ans;}
         for(int high=0;high<n;high++)
         { pro*=nums[high];
            while(pro>=k)
            { pro=pro/nums[low];
              low++;



            } ans+=high-low+1;




         }
         return ans;
    }
};