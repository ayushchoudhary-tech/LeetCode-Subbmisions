class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n=s.length(); int ans=INT_MIN;
        for(int i=0;i<n;i++)
        { int hasSet[255]={0};
          for(int j=i;j<n;j++)
          {  
            if(hasSet[s[j]]==1){break;}
            int length=j-i+1;
            ans=max(ans,length);
            hasSet[s[j]]=1;
          }


        }
        return ans==INT_MIN?0:ans;
    }
};