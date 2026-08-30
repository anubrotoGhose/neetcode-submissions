#include <unordered_map>
#include <vector>

using namespace std;
class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length() != t.length()) {
            return false;
        }
        unordered_map<char, int> char_map;
        for(int i=0;i<s.size();i++) {
            char_map[s[i]]++;
        }

        for(int i=0;i<t.size();i++) {
            char_map[t[i]]--;
            if(char_map[t[i]] < 0) {
                return false;
            }
        }

        return true;
    }


};
