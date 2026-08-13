class Solution {
public:
void fn(vector<int>&nums, int k, int ind, int sum, vector<int>&arr, vector<vector<int>>&ans){
    if(sum>k) return;
    if(ind==nums.size()){
        if(sum==k)ans.push_back(arr);
        return;
    }
    arr.push_back(nums[ind]);
    fn(nums, k, ind+1, sum+nums[ind], arr, ans);
    arr.pop_back();
    int nxt=ind+1;
    while(nxt<nums.size() && nums[nxt]==nums[ind]) nxt++;
    fn(nums, k, nxt, sum, arr, ans);
}
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(), candidates.end());
        vector<int>arr;
        vector<vector<int>>ans;
        fn(candidates, target, 0, 0, arr, ans);
        return ans;
    }
};
