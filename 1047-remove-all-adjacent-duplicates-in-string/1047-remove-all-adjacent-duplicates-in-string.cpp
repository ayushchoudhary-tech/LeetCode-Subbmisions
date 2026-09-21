class Solution {
public:
    string removeDuplicates(string str) {
        stack<char>s;  string res="";
        int n=str.length();
        for(int i=0;i<n;i++)
        { 
            if( s.size()>0 && s.top()==str[i])
            {
                s.pop();
            }else{
                s.push(str[i]);
            }
        }
        while(!s.empty())
        {
            res+=s.top();
            s.pop();
        }
        reverse(res.begin(),res.end());
        return res;


    }
};