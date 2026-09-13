class Solution {
public:
    long long maximumSubarraySum(vector<int>& nums, int k) {
        int n=nums.size(); int low=0; long long ans=LLONG_MIN; long long sum=0;
        unordered_map<int,int>m; int high=k-1;
       for(int i=low;i<=high;i++)
       { sum+=nums[i];
        m[nums[i]]++;

       }
       if(m.size()==k)
       { ans=max(ans,sum);

       }
       for(;high<n;)
       { sum-=nums[low];
        m[nums[low]]--;
        if(m[nums[low]]==0)
        {
            m.erase(nums[low]);
        }low++;
        high++;
        if(high==n){break;}
        sum+=nums[high];
        m[nums[high]]++;
        if(m.size()==k)
        {
            ans=max(sum,ans);
        }




       }

        return  ans<0?0:ans;
       
    }
};