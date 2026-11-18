class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n=nums.size();
        int st=0;int end=n-1;
        int ans=-1;
        while(st<=end)
        {
            int mid=st+(end-st)/2;
            if(nums[mid]==target)
            {
                return mid;
            }
            else if( nums[mid]>nums[n-1])
            {
                if(nums[st]<=target && nums[mid]>target)
                {
                    end=mid-1;
                }else{
                    st=mid+1;
                }
            }else
            {
                if(nums[mid]<target && target <=nums[end])
                { 
                    st=mid+1;
                   
                }else
                {
                     end=mid-1;
                }
            }
        }
        return ans;
    }
};