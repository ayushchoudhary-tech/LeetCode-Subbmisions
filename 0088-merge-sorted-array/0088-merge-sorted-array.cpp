class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int j=m-1,i=n-1;int idx=m+n-1;
        if(nums1.size()==1 && nums2.size()==1)
        {
            nums1[0]=nums2[0];
            return ;
        }
        while(j>=0 && i>=0)
        { if(nums1[j]<nums2[i]){

            nums1[idx]=nums2[i];
            idx--;i--;
        }else{
            nums1[idx]=nums1[j];
            idx--;j--; }
        }while(i>=0)
        {
            nums1[idx]=nums2[i];
            idx--;i--;
        }
    }
};