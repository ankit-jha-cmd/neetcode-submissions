class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size()!=t.size()) return false;
        unordered_map<int, int>mpp1, mpp2;
        for(int i=0;i<s.size();i++){
            mpp1[s[i]]++;
        }
        for(int j=0;j<t.size();j++){
            mpp2[t[j]]++;
        }

        for(auto it: mpp1){
           if(mpp2[it.first]!=it.second) return false;
        }
        return true;
    }
};
