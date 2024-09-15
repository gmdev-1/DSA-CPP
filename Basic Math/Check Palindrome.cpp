class Solution {
public:
    bool isPalindrome(int num) {
        int revNumber = 0;
        int dupNum = num;
        if (num == 0) {
            return true;
        }
        while (num != 0) {
            int lastDigit = num % 10;
            if ((revNumber > INT_MAX / 10) || (revNumber < INT_MIN / 10)) {
                return 0;
            }
            revNumber = (revNumber * 10) + lastDigit;
            num = num / 10;
        }
        if (dupNum == revNumber && dupNum > 0) {
            return true;
        } else {
            return false;
        }
    }
};
