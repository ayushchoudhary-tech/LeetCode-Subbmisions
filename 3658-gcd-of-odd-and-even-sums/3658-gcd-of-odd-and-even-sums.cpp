class Solution {
public:
    int gcdOfOddEvenSums(int n) {
        int odd=1,even=2;
        int i=1;
        int oddsum=0,evensum=0;
         
        
        
        while(i<=n)
        {
            oddsum+=odd;
            evensum+=even;
            even=even+2;
            odd=odd+2;
            i++;
        }
        return gcd(oddsum,evensum);

        
    }
};