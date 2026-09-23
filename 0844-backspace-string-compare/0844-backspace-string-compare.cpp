class Solution {
public:
    bool backspaceCompare(string s, string t) {
       stack<char>ss ; stack<char>ts;
       for(int i=0;i<s.length();i++)
       {
         if(ss.size()!=0 && s[i]=='#')
         {
            ss.pop();
         }else if(ss.size()==0  && s[i]=='#')
         {
            continue;
         }
         else
         {
            ss.push(s[i]);
         }
         
       }   
        for(int i=0;i<t.length();i++)
       {
         if(ts.size()!=0 && t[i]=='#')
         {
            ts.pop();
         }else if(ts.size()==0  && t[i]=='#')
         {
            continue;
         }
         else
         {
            ts.push(t[i]);
         }
         
       }
        return ss==ts?true:false;
    }
};