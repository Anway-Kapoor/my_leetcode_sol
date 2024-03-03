class Solution {
public:
    int trap(vector<int>& height) {
        int l = 0, r = height.size()-1;
        int area = 0;
        int left_max = INT_MIN;
        int right_max = INT_MIN;
        while(l < r){
            left_max = max(left_max, height[l]);
            right_max = max(right_max, height[r]);

            if(left_max < right_max){
                area += (left_max - height[l]);
                l++;
            }
            else{
                area += (right_max - height[r]);
                r--;
            }
        }
        return area;
    }
};