class Solution:
    def isPalindrome(self, s: str) -> bool:
        formatted_str = ""
        rev_formatted_str = ""
        for i in s:
            ch = i.lower()
            if ch.isalnum():
                formatted_str+=ch
                rev_formatted_str = ch + rev_formatted_str
        
        return rev_formatted_str == formatted_str
