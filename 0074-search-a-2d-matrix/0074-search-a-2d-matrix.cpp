class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int row = matrix.size();
        int col = matrix[0].size();
        int low = 0;
        int high = (row * col) - 1;
        while(low <= high){
            int mid = (low + high)/2;
            int mid_num = matrix[mid/col][mid%col];
            if(mid_num == target) return true;
            else if(mid_num < target) low = mid + 1;
            else high = mid - 1;
        }
        return false;
    }
};