class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double maxAvg=-DBL_MAX; int n=nums.size();
        int high=k-1,low=0; double avg=0;
        for(int i=0;i<=high;i++)
        {
            avg+= double(nums[i]);
        }
        avg= (avg/double(k));
        while(high<n)
        { maxAvg=max(avg,maxAvg);
          low++;high++;
          if(high==n){break;}
          avg=avg-(double(nums[low-1])/k);
          avg=avg+(double(nums[high])/k);


        }
        return maxAvg;
    }
};