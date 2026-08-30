class Solution {

public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> outputArray;
        
        unordered_map<string, vector<string>> mp;

        for(string str:strs) {
            string sortedStr = str;
            sort(sortedStr.begin(), sortedStr.end());

            mp[sortedStr].push_back(str);
        }

        for(auto &pair:mp){
            outputArray.push_back(pair.second);
        }

        return outputArray;
    }
};
