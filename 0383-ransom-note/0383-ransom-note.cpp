class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
      unordered_map<char,int> rn;unordered_map<char,int> mg;
      for(auto c:ransomNote)  
      {
        rn[c]++;
      }
      for(auto c: magazine)
      {
        mg[c]++;
      }
       for( auto c: ransomNote)
       {
        if(rn[c]>mg[c] )
        {
            return false;
        }
       }
       return true;
    }
};