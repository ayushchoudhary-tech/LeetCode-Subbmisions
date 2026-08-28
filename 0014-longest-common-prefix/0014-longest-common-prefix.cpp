class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if (strs.empty()) return "";
        
        // Take the first string as a reference
        for (int i = 0; i < strs[0].length(); i++) {
            char c = strs[0][i];
            
            // Compare character 'c' with the same position in all other strings
            for (int j = 1; j < strs.size(); j++) {
                // Stop if string is too short or character doesn't match
                if (i == strs[j].length() || strs[j][i] != c) {
                    return strs[0].substr(0, i);
                }
            }
        }
        
        return strs[0];
    }
};
