class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> match;
        for(int i=0; i<strs.size(); i++){
            string temp=strs[i];
            sort(temp.begin(), temp.end());
            match[temp].push_back(strs[i]);
        
        }

        vector<vector<string>> ans;
        for(auto x: match){
            ans.push_back(x.second);
        }
        return ans;
    }
};
