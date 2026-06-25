class Solution {
public:
    bool isAnagram(string s, string t) {
        int m=s.size(),n=t.size();
        if(m!=n) return false;

        unordered_map<char,int> mp;
        for(int i=0;i<m;i++){
            mp[s[i]]++;
        }
        for(int i=0;i<n;i++){
            mp[t[i]]--;
            if(mp[t[i]]==0)
                mp.erase(t[i]);
        }

        return mp.size()>0 ? false : true;
    }
};
