class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
       int s_len=s.length();int p_len=p.length(); vector<int >ans;
       if(p_len>s_len){return ans;}
       vector<int>p_count(26,0);
       vector<int>s_count(26,0);
       for( auto &c:p){
        p_count[c-'a']++;
       } int low=0;
       for(int high=0;high<s_len;high++)
       {
         s_count[s[high]-'a']++;

         if((high-low+1)>p_len)
         {
            s_count[s[low++]-'a']--;
         }
         if(s_count ==p_count)
         {
            ans.push_back(low);
         }
       }




      return ans;




       
    }
};