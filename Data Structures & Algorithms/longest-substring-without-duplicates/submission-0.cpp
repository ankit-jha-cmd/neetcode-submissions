class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<int, int>mp;
        int i=0; int j=0;
        int len=0;
        int maxlen=0;
        while(i<=j && j<s.size()){
            if(mp.find(s[j])!=mp.end() && mp[s[j]]>=i) i=mp[s[j]]+1;
            mp[s[j]]=j;
            len=mp[s[j]]-i+1;
            maxlen=max(maxlen, len);
            j++;
        }
        return maxlen;
    }
};
