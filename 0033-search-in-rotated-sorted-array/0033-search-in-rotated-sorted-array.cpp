class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n=nums.size();
        int st=0 ; int end=n-1;
        int ans=-1;
        while(st<=end)
        {
            int mid=st+(end-st)/2;
            if(nums[mid]==target)
            {
                return mid;
            }
            if(nums[mid]>nums[n-1])
            {
                if(nums[mid]<target)
                {
                    st=mid+1;
                }else
                {
                    if(nums[0]>target)
                    {
                     st=mid+1;
                    }else
                    {   end=mid-1;

                    }
                }
            }else{
                if(nums[mid]>target)
                {
                    end=mid-1;
                }else 
                {
                    if(nums[n-1]<target)
                    {
                        end=mid-1;
                    }else
                    {
                        st=mid+1;
                    }
                }
            }
            
        }
        return ans;
    }
};