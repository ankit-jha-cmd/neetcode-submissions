class Solution {
public:
void fn(vector<int>& nums, vector<int>&arr, int ind, vector<vector<int>>&ans){
    if(ind==nums.size()){
        ans.push_back(arr);
        return;
    }
    arr.push_back(nums[ind]);
    fn(nums, arr, ind+1, ans);
    arr.pop_back();
    int next=ind+1;
    while(next<nums.size() &&  nums[next]==nums[ind]) next++;
    fn(nums, arr, next, ans);
}
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<int>arr;
        vector<vector<int>>ans;
        fn(nums, arr, 0, ans);
        return ans;
    }
};
