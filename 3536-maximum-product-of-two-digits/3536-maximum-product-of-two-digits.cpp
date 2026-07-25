class Solution {
public:
    int maxProduct(int n) {
       int largest=0,secondlargest=0;
       while(n>0)
       {
         int digit=n%10;
         n=n/10;
         if(digit>=largest)
         {   secondlargest=largest;
            largest=digit;
         }else if(digit<largest && digit>secondlargest)
         {
            secondlargest=digit;
         }
         
       }
       return largest*secondlargest;
    }
};