class Solution {
public:
    bool isNStraightHand(vector<int>& hand, int groupSize) {
        map<int, int>mp;
        for(auto i:hand){
            mp[i]++;
        }
        while(!mp.empty()){
            int smallest=mp.begin()->first;
            for(int i=0;i<groupSize;i++){
                if(mp.find(smallest)==mp.end()) return false;
                mp[smallest]--;
                if(mp[smallest]==0) mp.erase(smallest);
                smallest++;
            }
        }
        return true;
    }
};
