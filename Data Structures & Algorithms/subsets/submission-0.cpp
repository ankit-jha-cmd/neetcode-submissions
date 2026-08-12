class Solution {
public:
void fn(vector<int>& nums, vector<int>& arr, vector<vector<int>>& ans, int ind){
    if(ind>=nums.size()){
        ans.push_back(arr);
        return;
    }
    arr.push_back(nums[ind]);
    fn(nums, arr, ans, ind+1);
    arr.pop_back();
    fn(nums, arr, ans, ind+1);
}
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int>arr;
        vector<vector<int>>ans;
        fn(nums, arr, ans, 0);
        return ans;
    }
};
