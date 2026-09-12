class Solution {
public:
    int maxPower(string s) {
        int n=s.length(); unordered_map<char,int>m;
       int maxpower=INT_MIN;int low=0;
       for(int high=0;high<n;high++)
       { m[s[high]]++;
          if(m.size()>1)
          { m[s[low]]--;
            if(m[s[low]]==0){m.erase(s[low]);}
            low++;

         }
          int len=high-low+1;
         maxpower=max(maxpower,len);



       }
       return maxpower;

    }
};