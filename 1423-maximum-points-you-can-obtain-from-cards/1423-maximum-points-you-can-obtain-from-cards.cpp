class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int left_sum = 0;
        int right_sum = 0;
        int maxi = 0;
        for(int i=0;i<k;i++){
            left_sum += cardPoints[i];
        }
        maxi = left_sum;
        int rIndex = cardPoints.size()-1;
        for(int i=k-1;i>=0;i--){
            left_sum -= cardPoints[i];
            right_sum += cardPoints[rIndex];
            rIndex--;
            maxi = max(maxi, left_sum + right_sum);
        }
        return maxi;
    }
};