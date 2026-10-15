
class Solution {
public:
    int sumOfSquares(vector<int>& nums) {
        vector<int> ans;
        int n = nums.size();
        int sum = 0;

        for (int i = 0; i < n; i++) {
            if (n % (i + 1) == 0) {
                ans.push_back(nums[i]);
            }
        }

        for (int x : ans) {
            sum += x * x;
        }

        return sum;
    }
};
