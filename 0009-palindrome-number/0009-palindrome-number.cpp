class Solution {
public:
    bool isPalindrome(int x) {
        int reverse=0;
        if(x<0){return false;}
        int temp=x;
        while(temp>0)
        { int lastDigit=temp%10;
         if(reverse>INT_MAX/10 || reverse<INT_MIN/10){return false;}
          reverse=(reverse*10)+lastDigit;
          temp=temp/10;
        } 
        return x==reverse?true:false;
    }
};