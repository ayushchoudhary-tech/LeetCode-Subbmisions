class Solution {
public:
    int findLucky(vector<int>& arr) {
        int n=arr.size();
        int ans=-1;
        unordered_map<int,int>m;
        for(int i=0;i<n;i++)
        {
            m[arr[i]]++;
        }
        for(const auto & it :m)
        {
            if(it.first==it.second)
            {    if(ans<it.first)
                {
               ans=it.first;
                }
            }
        }
        return ans;

    }
};