class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int actualSum=0,expectedSum=0;
        int n=nums.size();
    for( auto el:nums)
    {  actualSum+=el;

    }
    expectedSum=n*(n+1)/2;
    int missing=expectedSum-actualSum;
    return missing;
      
    }
};