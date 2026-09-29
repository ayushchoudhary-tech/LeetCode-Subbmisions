class Solution {
public:
    int numOfSubarrays(vector<int>& nums, int k, int threshold) {
        int low=0, high=k-1; int avg=0;
        int ans=0; int sum=0; int n=nums.size();
        for(int i=low;i<=high;i++)
        {
            sum+=nums[i];
        }
        avg=sum/k;
        if(avg>=threshold)
        {
            ans++;
        }
        while(high<n)
        {  avg-=nums[low]/k;
           low++;high++;
           if(high==n){break;}
           avg+=nums[high]/k;
            if(avg>=threshold)
          {
            ans++;
           }
        }
        return ans;
    }
};