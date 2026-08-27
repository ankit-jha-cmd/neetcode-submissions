class Solution {
public:
string removeextra(string &s){
    string ans;
    for(int i=0;i<s.size();i++){
            if((s[i]<'a' || s[i]>'z')
            && (s[i]<'A' || s[i]>'Z')
            &&
            (s[i]<'0' || s[i]>'9')) continue;
            ans+=s[i];
        }
        return ans;
}

bool check(string &s){
    int i=0;
    int j=s.size()-1;
    while(i<=j){
        if(s[i]!=s[j]) return false;
        i++;
        j--;
    }
    return true;
}
    bool isPalindrome(string s) {
        transform(s.begin(), s.end(), s.begin(), :: tolower);
        s=removeextra(s);
        return check(s);
    }
};
