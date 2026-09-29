class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double ans=-DBL_MAX; int n=nums.size();
        int low=0;int high=k-1;
        double sum=0;
        for(int i=low;i<=high;i++)
        {
            sum+=nums[i];
        }
        sum=double(sum/k);
        ans=max(ans,sum);
        while(high<n)
        { 
            sum-=double( double(nums[low])/k);
           low++;high++;
           if(high==n){break;}
           sum+=double( double(nums[high])/k);
           ans=max(ans,sum);

        }
        return ans;

    }
};