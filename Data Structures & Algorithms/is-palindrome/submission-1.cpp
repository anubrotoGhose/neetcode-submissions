#include <ctype.h>
class Solution {
public:
    bool isPalindrome(string s) {

        string newStr = "";
        for(int i=0;i<s.length();i++) {
            char ch = s.at(i);
            ch = tolower(ch);
            if((ch>='a' && ch<='z') | (ch >= '0' && ch <='9') ) {
                newStr+=ch;
            }
        }
        for(int i=0;i<(int)(newStr.length() / 2);i++) {
            char p1 = newStr.at(i);
            char p2 = newStr.at(newStr.length() - 1 - i);
            if(p1!=p2) {
                return false;
            }
        }

        return true;
    }
};
