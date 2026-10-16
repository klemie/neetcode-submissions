class Solution {
public:
    bool isPalindrome(string s) {
        //normalize
        string normalizedString;
        for (char c : s) {
            if (isalphaNumeric(c)) {
                normalizedString += tolower(c);
            }
        }

        int left = 0, right = normalizedString.size() - 1;

        while (left < right) {
            if (normalizedString[left] != normalizedString[right]) return false;
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
