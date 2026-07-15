class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {    // h is total h that koko has
                                                          //hours is the h that koko uses
      
        int low = 1;
        int high = *max_element(piles.begin(), piles.end()); 
        //we dereference the iterator using *

        while (low < high) {
            int mid = low + (high - low) / 2;

            long long hours = 0;         //int works

            for (int pile : piles) {
                hours += (pile + mid - 1) / mid;     //hours += ceil((double)pile / mid);
            }

            if (hours <= h)    
                high = mid;
            else
                low = mid + 1;
        }

        return low;
    }
};
