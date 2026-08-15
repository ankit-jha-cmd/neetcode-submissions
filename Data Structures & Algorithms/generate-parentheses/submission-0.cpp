class Solution {
public:
void fn(int n, string& s, int open, int close, vector<string>&ans){
    if(open==n && close==n){
        ans.push_back(s);
        return;
    }
    if(open<n){
        s+='(';
        fn(n, s, open+1, close, ans);
        s.pop_back();
    }
    if(close<open){
        s+=')';
        fn(n, s, open, close+1, ans);
        s.pop_back();
    }
}
    vector<string> generateParenthesis(int n) {
        string s;
        vector<string>ans;
        fn(n, s, 0, 0, ans);
        return ans;
    }
};
