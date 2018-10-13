class Solution {
public:
    bool isIsomorphic(string s, string t) {
        int cnt1[256]= {0},cnt2[256]= {0};
        for(int i=0; i<s.length(); i++) {
            if(cnt1[s[i]]!=cnt2[t[i]])
                return false;
            cnt1[s[i]]=cnt2[t[i]]=i+1;
        }
        return true;
    }
};