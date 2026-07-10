class Solution {
public:
    bool isValid(string s) {
     vector<char> chk;
     for(char ch:s)
     {
        if(ch=='('||ch=='{'||ch=='['){
            chk.push_back(ch);
        }else
        {
            if(chk.empty())
            {
                return false;
            }
            if((ch==')'&& chk.back()=='(')||(ch=='}'&& chk.back()=='{')||(ch==']'&& chk.back()=='['))
            {
                chk.pop_back();
            }else
            {
                return false;
            }
        }
     }
     return chk.empty();
    }
};