class Solution {
public:
    int maxVowels(string s, int k) {
      int low=0;int n=s.length();
     int   maxVowel=INT_MIN, vowel=0; int high=k-1;
      for(int i=0;i<=high;i++)
      { if(s[i]=='a' || s[i]=='e'|| s[i]=='i' || s[i]=='o' ||s[i]=='u')
      {
        vowel++;
      }

      }
       while(high<n)
       { maxVowel=max(maxVowel,vowel);
         low++;high++;
         if(high==n){break;}
         if(s[low-1]=='a' || s[low-1]=='e'|| s[low-1]=='i' || s[low-1]=='o' ||s[low-1]=='u')
         {
            vowel--;
         }
         if(s[high]=='a' || s[high]=='e'|| s[high]=='i' || s[high]=='o' ||s[high]=='u')
         {
            vowel++;
         }

       }
       return maxVowel;
    }
};