class Solution {
public:
    bool isPalindrome(string s) {
        int left = 0, right = s.length() - 1;

        while (left < right) {
            while (!isalphaNumeric(s[left]) && left < right) left++;
            while (!isalphaNumeric(s[right])&& right > left) right--;

            if (tolower(s[left]) != tolower(s[right])) return false;

            left++;
            right--;
        }
        
        return true; 
    }

    bool isalphaNumeric(char c) {
        return (c >= 'A' && c <= 'Z' ||
                c >= 'a' && c <= 'z' ||
                c >= '0' && c <= '9');
    }
};
