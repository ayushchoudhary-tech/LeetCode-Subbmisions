class Solution {
public:
    int pivotIndex(vector<int>& nums) {
       int n=nums.size();
        vector<int>prefix(n,0);int ans=-1;
        vector<int>sufix(n,0);
        prefix[0]=0;
        sufix[n-1]=0;
        for(int i=1;i<n;i++)
        {
            prefix[i]=prefix[i-1]+nums[i-1];
        }
        for(int i=n-2;i>=0;i--)
        {
            sufix[i]=sufix[i+1]+nums[i+1];
        }
        for(int i=0;i<n;i++)
        {
            if(prefix[i]==sufix[i])
            {
                ans=i;
                return ans;
            }
        }
        return ans;

    }
};