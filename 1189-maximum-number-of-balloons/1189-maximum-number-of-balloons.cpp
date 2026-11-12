class Solution {
public:
    int maxNumberOfBalloons(string text) {
        unordered_map<char,int> need;
        unordered_map<char,int> have;
        int ans=INT_MAX;
        need['b']++;
        need['a']++;
        need['l']=2;
        need['o']=2;
        need['n']++;
       
        for(auto c:text )
        {
            have[c]++;
        }
        for(auto i: need)
        { char c=i.first;
          int needfreq=i.second;
          int havfreq=have[c];
          ans=min(ans,(havfreq/needfreq));
           
        }


        return ans;



    }
};