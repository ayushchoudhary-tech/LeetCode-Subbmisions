class Solution {
public:
    string removeStars(string s) {
        stack<char> stack; int n=s.size();
        for(int i=0;i<n;i++)
        { if(s[i]=='*')
        {
            stack.pop();
        }
        else{ stack.push(s[i]);

        }}
        string ans="";
        while(!stack.empty())
        { ans+=stack.top();

        stack.pop();

        }
        reverse(ans.begin(),ans.end());
        return ans;
        
    }
};