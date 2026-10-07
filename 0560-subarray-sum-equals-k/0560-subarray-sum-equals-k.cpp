class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        // int n=nums.size();int count=0;
        // vector<int>prefix(n);
        // prefix[0]=nums[0];
        // for(int i=1;i<n;i++)
        // {
        //     prefix[i]=prefix[i-1]+nums[i];
        // }unordered_map<int,int>m;
        // for(int j=0;j<n;j++)
        // { if(prefix[j]==k){count++;}
        //    int val=prefix[j]-k;
        //    if(m.find(val)!=m.end())
        //    { count+=m[val];

        //    }if(m.find(prefix[j])==m.end())
        //    { m[prefix[j]]=0;

        //    }m[prefix[j]]++;

        // } i
        int sum=0; int n=nums.size();
        int ans=0;
        unordered_map<int,int>m;
        m[0]++;
        for(int i=0;i<n;i++)
        {  sum+=nums[i];
            int find=sum-k;
         int freq=m[find];
         ans+=freq;
         m[sum]++;
         


        }
        return ans;
        
    }
};