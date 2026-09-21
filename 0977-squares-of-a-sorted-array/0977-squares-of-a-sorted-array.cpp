class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
       int n=nums.size();
    //    vector<int> res(n);
    //    for(int i=0;i<n;i++)
    //    { res[i]=pow(nums[i],2);
 

    //    } 
    //   // [16,1,0,9,100];
    // int i=0; int j=n-1;
    //  while(i<j)
    //  { if(nums[i]<nums[j]){j--;}
          //}
    vector<int>pos;vector<int>neg;vector<int>res(n);
    for(int i=0;i<n;i++)
    {
        if(nums[i]>=0)
        {
            pos.push_back(nums[i]);
        }
        else{
            neg.push_back(nums[i]);
        }
    } if(neg.size()==0)
    {
        for(int i=0;i<pos.size();i++)
      {  pos[i]=pos[i]*pos[i];}
      return pos;
    }
    if(pos.size()==0)
    {
        for(int i=0;i<neg.size();i++)
      {  neg[i]=neg[i]*neg[i];}
         reverse(neg.begin(),neg.end());
      return neg;
    }

      for(int i=0; i<pos.size();i++)
      {
        pos[i]=pos[i]*pos[i];
      }
      for(int i=0;i<neg.size();i++)
      {
        neg[i]=neg[i]*neg[i];
      }
      reverse(neg.begin(),neg.end());
      int pn=pos.size(), ngn=neg.size();
      int i=0,j=0,idx=0;
      while(i<pn && j<ngn)
      {  if(pos[i]<=neg[j])
      {
        res[idx]=pos[i];
        idx++;i++;
      }else {
        res[idx]=neg[j];
        idx++;j++;}
     } while(i<pn)
     {
        res[idx]=pos[i];
        idx++;i++;
     }
     while(j<ngn)
     {
        res[idx]=neg[j];
        idx++;j++;
     }
    return res;

    }
};