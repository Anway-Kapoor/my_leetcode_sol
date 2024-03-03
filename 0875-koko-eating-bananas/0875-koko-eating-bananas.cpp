class Solution {
public:
    
    long long func(vector<int>& piles, int hourly){
        long long total_hours = 0;
        for(int i : piles){
            total_hours += ceil((double)i/(double)hourly);
        }
        return total_hours;
    }
    
    int minEatingSpeed(vector<int>& piles, int h) {
        int low = 1;
        long long high = *max_element(piles.begin(), piles.end());
        while(low <= high){
            long long mid = (low + high)/2;
            if(func(piles, mid) <= h){
                high = mid - 1;
            }
            else low = mid + 1;
        }
        return low;
    }
};