class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        int n=strs.size();
        if(n==1) return {strs};
        vector<string> temp=strs;
        for(int i=0;i<n;i++)
            sort(temp[i].begin(),temp[i].end());
        
        unordered_map<string,vector<int>> mp;
        for(int i=0;i<n;i++){
            mp[temp[i]].push_back(i);
        }

        vector<vector<string>> ans;

        for(auto m:mp){
            int s=m.second.size();
            vector<string> t;
            for(int i=0;i<s;i++){
                t.push_back(strs[m.second[i]]);
            }
            ans.push_back(t);
        }
        return ans;
    }
};
