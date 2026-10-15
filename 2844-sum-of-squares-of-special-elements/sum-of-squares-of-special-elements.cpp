
class Solution {
public:
    int sumOfSquares(vector<int>& nums) {
        vector<int> ans;
        int n = nums.size();
        int sum = 0;

        for (int i = 0; i < n; i++) {   
            if (n % (i + 1) == 0) {  //this question can also be done by storing the value in a new vector and then traversing the vector and using sum+=ans[i]*ans[i]
                sum+=nums[i]*nums[i];
            }
        }

       

        return sum;
    }
};
