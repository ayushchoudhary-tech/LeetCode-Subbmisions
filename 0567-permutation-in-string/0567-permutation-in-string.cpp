class Solution {
public: 
     bool isfreqSame(int arr1[],int arr2[])
     { for(int i=0;i<26;i++)
        {
            if(arr1[i]!=arr2[i])
            {
                return false;
            }
        } return true;

     }

     
    bool checkInclusion(string s1, string s2) {
        int freqs1[26]={0};
        for(int i=0;i<s1.length();i++)
        { int idx=s1[i]-'a';
         freqs1[idx]++;

        }
        int windowsize=s2.length();
        for(int i=0;i<s2.length();i++)
        { int windowidx=0; int idx=i;
          int windowfreq[26]={0};
            while(windowidx<windowsize && idx<s2.length())
            { windowfreq[s2[idx]-'a']++;
              windowidx++;idx++;
              if(isfreqSame(freqs1,windowfreq))
              {
                return true;
              }

            }
            
        }
        return false;
    }
};