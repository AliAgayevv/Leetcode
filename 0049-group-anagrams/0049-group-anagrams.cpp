class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) 
    {
        unordered_map <string, vector<string>> mp;
        for(auto x : strs)
        {
            string word = x;
            sort(word.begin(),word.end());
            mp[word].push_back(x);
        }
        
        vector<vector<string>> output;
        for(auto x : mp)
        {
            output.push_back(x.second);
        }
        return output;
    }
};
