class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int maxpro=nums[0];
        int minpro=nums[0];
        int res=nums[0];
        int n=nums.size();
        for(int i=1;i<n;i++)
        { int v1=nums[i];
           int v2=minpro*nums[i];
           int v3=maxpro*nums[i];
           minpro=min(v1,min(v2,v3));
           maxpro=max(v1,max(v2,v3));
           res=max(res,max(maxpro,minpro));



        }
        return res;
    }
};