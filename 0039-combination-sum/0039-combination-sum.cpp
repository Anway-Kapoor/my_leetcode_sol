class Solution {
public:
   
   void findCombination(int i, int target, vector<int> &arr, vector<int> &ds, vector<vector<int>> &ans){
       if(i == arr.size()){
           if(target == 0){
               ans.push_back(ds);
           }
           return;
       }
       if(arr[i] <= target){
           ds.push_back(arr[i]);
           findCombination(i, target-arr[i], arr, ds, ans);
           ds.pop_back();
       }
       findCombination(i+1, target, arr, ds, ans);
   }
   
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        vector<int> ds;
        findCombination(0, target, candidates, ds, ans);
        return ans;
    }
};