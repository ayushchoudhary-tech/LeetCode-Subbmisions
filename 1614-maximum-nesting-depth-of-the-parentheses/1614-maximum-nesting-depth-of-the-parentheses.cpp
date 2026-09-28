class Solution {
public:
    int maxDepth(string s) {
        int depth=0;
        int max_depth=INT_MIN;
        for( auto ch : s)
        {
            if(ch=='(')
            { 
                depth++;
                max_depth=max(depth,max_depth);
            }
            else if(ch==')') {
                depth--;
            }
            max_depth=max(depth,max_depth);
        }
        return max_depth;
    }

};