class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        // int k=1;
        // for(int i=1;i<nums.size();i++)
        // {
        //     if(nums[i]!=nums[i-1]) {nums[k]=nums[i];k++;}
        // }
        // nums.resize(k);
        // return nums.size();
        // 2-ptr 
        int idx=0;
        nums[idx]=nums[0];idx++;
        int n=nums.size();
        for(int i=1;i<n;i++)
        { if(nums[i]!=nums[i-1])
           {
            nums[idx]=nums[i];
            idx++;
           }

        } nums.resize(idx);
        return nums.size() ;
    }
};