class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
         vector<vector<string>>v;
         unordered_map<string,vector<string>>s;
         for(string word:strs){
            string key =word;
            sort(key.begin(),key.end());
            s[key].push_back(word);
         }
         for(auto it:s){
            v.push_back(it.second);
         }
         return v;
    }
};
