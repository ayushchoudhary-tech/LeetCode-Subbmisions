class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int n=nums.size(); int evencount=0;
        for(int i=0;i<n;i++)
        { int num=nums[i];int noofdigit=0;
          while(num!=0)
          { int lstdgt=num%10;
            noofdigit+=1;
            num=num/10;
            } if(noofdigit%2==0)
            {
                evencount++;
            }

        }
        return evencount;

    }
};