class Solution {
public:
    int jump(vector<int>& nums) {
        int l=0;
        int r=0;
        int jump=0;
        while(r<nums.size()-1){
            int maxreach=0;
            for(int i=l;i<=r;i++){
                maxreach=max(maxreach, i+nums[i]);
            }
            l=r+1;
            r=maxreach;
            jump++;
        }
        return jump;
    }
};
