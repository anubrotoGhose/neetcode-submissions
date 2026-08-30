class Solution {
public:

    string encode(vector<string>& strs) {
        string s;
        for(int i=0;i<strs.size();i++) {
            s+=to_string(strs[i].length())+"#"+strs[i];
        }

        return s;
    }

    vector<string> decode(string s) {
        vector<string> strs;
        string tempCharLength = "";
        int i=0;
        while(i<s.length()) {
            int j=i;
            while(s.at(j)!='#') {
                j++;
            }

            int length = stoi(s.substr(i, j-i));
            strs.push_back(s.substr(j+1, length));

            i = j + 1 + length;
        }

        return strs;
    }
};
