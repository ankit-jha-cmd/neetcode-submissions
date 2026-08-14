class Solution {
public:
void fn(vector<int>& nums, vector<int>&arr, int ind, set<vector<int>>& st){
    if(ind==nums.size()){
        vector<int>temp=arr;
        sort(temp.begin(), temp.end());
        st.insert(temp);
        return;
    }
    arr.push_back(nums[ind]);
    fn(nums, arr, ind+1, st);
    arr.pop_back();
    fn(nums, arr, ind+1, st);
}
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        set<vector<int>>st;
        vector<int>arr;
        vector<vector<int>>ans;
        fn(nums, arr, 0, st);
        while(!st.empty()){
        ans.push_back(*st.begin());
        st.erase(*st.begin());
        }
        return ans;
    }
};
