class Solution {
public:
    int maxArea(vector<int>& height) {
        int n = height.size();
        int l = 0;
        int r = n-1;
        int area = 1;
        int maxi = INT_MIN;
        while(l < r){
            int length = r - l;
            int breadth = min(height[l], height[r]);
            area = length * breadth;
            maxi = max(maxi, area);
            if(height[l] < height[r]) l++;
            else r--;
        }
        return maxi;
    }
};