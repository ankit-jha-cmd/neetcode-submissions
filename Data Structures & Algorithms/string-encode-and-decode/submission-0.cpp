class Solution {
public:

    string encode(vector<string>& strs) {
        string e="";
        for(int i=0;i<strs.size();i++){
            int n=strs[i].size();
            e+=to_string(n) + "#";
            e+=strs[i];
        }
        return e;
    }

    vector<string> decode(string s) {
        vector<string>ans;
        for(int i=0;i<s.size();i++){
            int len=0;
            while(s[i]!='#'){
                len=len*10 + s[i]-'0';
                i++;
            }
            ans.push_back(s.substr(i+1 , len));
            i+=len;
        }
        return ans;
    }
};
