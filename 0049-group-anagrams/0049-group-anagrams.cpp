class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>>ans;
        unordered_map<string,vector<string>>m;
        for(auto &s : strs){
            auto k = s;
            sort(k.begin(),k.end());
            m[k].push_back(s);
        }
        for( auto &it : m){
            ans.push_back(it.second);
        }
        return ans;
    }
};