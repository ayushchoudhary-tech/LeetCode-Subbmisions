class Solution {
public:
    int myAtoi(string s) {
        int n=s.length();
        int i=0;
        //skip leading spaces
        while(i<n && s[i]==' ')
        {
            i++;
        }
        //check sign 
        int sign=1;
        if(i<n && (s[i]=='+'|| s[i]=='-')){
            if(s[i]=='-')
            {
                sign=-1;
                
            }else{
                sign=1;
            }
            i++;
        }
        long long ans=0;
        //read digits
        while(i<n && s[i]>='0' && s[i]<='9')
        {//check overflow
            if(ans>(INT_MAX-(s[i]-'0'))/10){
                return (sign ==1)?INT_MAX:INT_MIN;

            }
            ans=ans*10+(s[i]-'0');
            i++;
        }
        return sign*ans;
        
    }
};