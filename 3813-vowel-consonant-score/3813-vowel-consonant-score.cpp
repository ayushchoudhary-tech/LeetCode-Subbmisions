class Solution {
public:
    int vowelConsonantScore(string s) {
        int vowelcount=0 ; int consonantcount=0; int n=s.size();
        for(int i=0;i<n;i++)
        {    if(isalpha(s[i])){
    
            if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u')
            { vowelcount++;

            }
            else{
                consonantcount++;
            }}
         

        }
        if(consonantcount==0){return 0;}
        
        return vowelcount/consonantcount;

    }
};