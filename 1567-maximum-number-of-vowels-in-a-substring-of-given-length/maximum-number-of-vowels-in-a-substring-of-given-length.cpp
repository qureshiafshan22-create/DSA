class Solution {
public:
    int maxVowels(string s, int k) {
       int count = 0;
        int maxCount = 0;

        // Count vowels in the first window
        for(int i = 0; i < k; i++) {
            if(s[i] == 'a' || s[i] == 'e' ||
               s[i] == 'i' || s[i] == 'o' ||
               s[i] == 'u') {
                count++;
            }
        }

        maxCount = count;

        // Slide the window
        for(int i = k; i < s.length(); i++) {

            // Remove outgoing character
            if(s[i-k] == 'a' || s[i-k] == 'e' ||
               s[i-k] == 'i' || s[i-k] == 'o' ||
               s[i-k] == 'u') {
                count--;
            }

            // Add incoming character
            if(s[i] == 'a' || s[i] == 'e' ||
               s[i] == 'i' || s[i] == 'o' ||
               s[i] == 'u') {
                count++;
            }

            maxCount = max(maxCount, count);

            // Maximum possible vowel count is k
            // if(maxCount == k) {
            //     return k;
            // }
        }

        return maxCount;
    }
};