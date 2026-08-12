class Solution {
public:
void fn(int ind, int sum, vector<int>&nums, vector<int>&arr, vector<vector<int>>&ans, int k){
    if(sum>k) return;
    if(ind>=nums.size()){
        if(sum==k)ans.push_back(arr);
        return;
    }
    arr.push_back(nums[ind]);
    fn(ind, sum+nums[ind], nums, arr, ans, k);
    arr.pop_back();
    fn(ind+1, sum, nums, arr, ans, k);
}
    vector<vector<int>> combinationSum(vector<int>& nums, int target) {
        vector<int>arr;
        vector<vector<int>>ans;
        fn(0, 0, nums, arr, ans, target);
        return ans;
    }
};
