class Solution {
public:
 
    bool searchInRow(vector<vector<int>>& matrix,int target, int midrow)
        {int n=matrix[0].size();
            int st=0,end=n-1;

        while(st<=end)
         {int mid=st+(end-st)/2;
          if(matrix[midrow][mid]==target){return true;}
          else if(matrix[midrow][mid]<target)
          {
            st=mid+1;
          }else {
            end=mid-1;
          }

         }
         return false;
    }   


    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m=matrix.size(),n=matrix[0].size();
        int srow=0 , erow=m-1;
        while(srow<=erow)
        {int midrow=srow+(erow-srow)/2;
         if(matrix[midrow][0]<=target && matrix[midrow][n-1]>=target)
         { return searchInRow(matrix,target,midrow);
         }
            else if(matrix[midrow][n-1]<=target)
            {
                srow=midrow+1;
            }else{
                erow=midrow-1;
            }
             
        }
        return false;
    }
};