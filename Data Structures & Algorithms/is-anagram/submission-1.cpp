#include <unordered_map>
#include <vector>

using namespace std;
class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length()!=t.length()) {
            return false;
        }
        map<char, int> dict1;
        map<char, int> dict2;
        for(int i=0;i<s.length();i++) {
            if(dict1.count(s[i]) <0) {
                dict1[s[i]] = 1;
            } else {
                dict1[s[i]] += 1;
            }
            if(dict2.count(t[i]) <0) {
                dict2[t[i]] = 1;
            } else {
                dict2[t[i]] += 1;
            }
        }

        // for (char ch : dict1.keySet()) {
        //     if (dict2.count(ch) < 0) {
        //         return false;
        //     } else if (dict1[ch]!=dict2[ch]) {
        //         return false;
        //     }
        // }

        for(auto i : dict1) {
            if (dict2.count(i.first) < 0) {
                return false;
            } else if (dict1[i.first]!=dict2[i.first]) {
                return false;
            }
        }

        return true;
    }


};
