class Solution {
public:
    bool checkString(string s) {
       int left = 0;
        int right = s.size() - 1;

        while(left < s.size() && s[left] == 'a') {
            left++;
        }

        while(right >= 0 && s[right] == 'b') {
            right--;
        }

        return left > right;
    }
};