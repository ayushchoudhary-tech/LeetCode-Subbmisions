class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        int n=nums.size();
        int sum=0;
        int ans=0;
        unordered_map<int,int>m;
        m[0]++;
        for(int i=0;i<n;i++)
        {
            sum+=nums[i];
            int remainder=sum%k;
            if(remainder<0)
            {
                remainder=remainder+k;
            }
            int freq=m[remainder];
            ans+=freq;
            m[remainder]++;
        }
        return ans;
    }
};