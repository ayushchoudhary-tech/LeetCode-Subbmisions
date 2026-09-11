class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        int n=fruits.size(); unordered_map<int,int>m;
        int low=0; int res=INT_MIN;
        for(int high=0;high<n;high++)
        { m[fruits[high]]++;
         while(m.size()>2)
         {
            m[fruits[low]]--;
            if(m[fruits[low]]==0)
            {
                m.erase(fruits[low]);
            } low++;
         } if(m.size()<2 ||m.size()==2)
         {
            int fruits=high-low+1;
            res=max(res,fruits);
         }
         }

         return res;
    }
};