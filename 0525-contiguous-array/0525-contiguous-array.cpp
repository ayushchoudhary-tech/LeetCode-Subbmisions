class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        int n=nums.size(); int res=0;
        int zerocount=0; int onecount=0;
        unordered_map<int,int>m;
        for(int i=0;i<n;i++)
        {
            if(nums[i]==1)
            {
                onecount++;
            }else
            {
                zerocount++;
            }
            int diff=zerocount-onecount;
            if(diff==0){ res=max(res,i+1);}
            else{
            if(m.find(diff)==m.end())
            {
                m[diff]=i;
            }else
            {
                int idx=m[diff];
                int len=i-idx;
                res=max(res,len);

            }}
        }
        return res;
    }
};