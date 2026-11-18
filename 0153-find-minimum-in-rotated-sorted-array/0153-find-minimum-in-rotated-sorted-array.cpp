class Solution {
public:
    int findMin(vector<int>& nums) {
      int n=nums.size();
      int st=0; int end=n-1;  int ans=-1;
      while(st<=end)
      {
        int mid=st+(end-st)/2;
        if(nums[mid]>nums[n-1])
        {
            st=mid+1;
        }else{ ans=nums[mid];
         end=mid-1;

        }
      }
      return ans;
    }
};