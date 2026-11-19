// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        int low = 1;
        int high = n;
        int lastGood = 0; 
        
        while (low <= high) {
            int mid = low + (high - low) / 2;
            
            if (!isBadVersion(mid)) {
                lastGood = mid; 
                low = mid + 1;  
            } else {
                high = mid - 1; 
            }
        }
        
        return lastGood + 1; 
    }
};