class Solution {
public:
    int maxArea(vector<int>& heights) {
        int i=0;
        int n=heights.size();
        int j=n-1;
        int maxcap=0;
        while(i<j){
            int cap=min(heights[i],heights[j]) * (j-i);
            maxcap=max(maxcap, cap);
            if(heights[i]<heights[j]) i++;
            else j--;
        }
        return maxcap;
    }
};
