class Solution {
public:  vector<vector<int>>merge(vector<vector<int>>&merge){
             int n=merge.size();vector<vector<int>>res;
             int start1=merge[0][0];
             int end1=merge[0][1];
             for(int i=1;i<n;i++)
             {
                int start2=merge[i][0];
                int end2=merge[i][1];
                if(start2<end1 || start2==end1)
                {
                    start1=start1;
                    end1=max(end1,end2);
                    continue;
                }
                else{
                    res.push_back({start1,end1});
                    start1=start2;
                    end1=end2;
                }
                
             }
             res.push_back({start1,end1});
              return res;
    }
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
        vector<vector<int>>combined;
        if(intervals.size()==0){intervals.push_back(newInterval);return intervals;}
        bool insert=false; int n=intervals.size();
        for(int i=0;i<n;i++)
        {  int start =intervals[i][0];
          if(insert==false && start>newInterval[0])
          {
            combined.push_back(newInterval);
            insert=true;
          }
          combined.push_back(intervals[i]);
        }
         if(insert==false)
         {
            combined.push_back(newInterval);
         }
         return merge(combined);
    }
};