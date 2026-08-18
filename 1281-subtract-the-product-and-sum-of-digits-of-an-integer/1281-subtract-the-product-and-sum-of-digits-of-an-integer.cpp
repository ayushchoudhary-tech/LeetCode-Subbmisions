class Solution {
public:
    int subtractProductAndSum(int n) {
       int sum=0,product=1;
        while(n!=0)
        { int lstdgt=n%10;
           sum+=lstdgt;
           product*=lstdgt;
           n=n/10;

        }
        return product-sum;
    }
};