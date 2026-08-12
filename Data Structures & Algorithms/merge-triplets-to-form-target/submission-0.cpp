class Solution {
public:
    bool mergeTriplets(vector<vector<int>>& triplets, vector<int>& target) {
        bool f1=false;
        bool f2=false;
        bool f3=false;
        for(int i=0;i<triplets.size();i++){
            if(triplets[i][0]>target[0] || triplets[i][1]>target[1] ||
            triplets[i][2]>target[2]) continue;

            if(triplets[i][0] == target[0]) f1=true;
            if(triplets[i][1] == target[1]) f2=true;
            if(triplets[i][2] == target[2]) f3=true;
        }
        return f1 && f2 && f3;
    }
};
