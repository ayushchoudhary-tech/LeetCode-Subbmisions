class Solution {
public:
    int maxSubArray(vector<int>& nums) {
     int CurrentSum=0,n=nums.size();
     int MaxSum=INT_MIN;
     for(int i=0;i<n;i++)
        {
        CurrentSum+=nums[i];
        MaxSum=max(CurrentSum,MaxSum);
        if(CurrentSum<0)
        {
            CurrentSum=0;
        }
     }
     return MaxSum;
     }

};