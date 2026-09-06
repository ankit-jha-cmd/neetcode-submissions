class Solution {
public:
    int characterReplacement(string s, int k) {
        int l=0;
        int r=0;
        int maxlen=0;
        int maxf=0;
        vector<int>freq(26);
        while(r<s.size()){
            freq[s[r]-'A']++;
            maxf=max(maxf, freq[s[r]-'A']);
            while((r-l+1)-maxf>k){
                freq[s[l]-'A']--;
                l++;
            }
            maxlen=max(r-l+1, maxlen);
            r++;
        }
        return maxlen;
    }
};
