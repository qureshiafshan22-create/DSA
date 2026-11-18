class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int sum =0;
        //for first window
        for(int i=0;i<k;i++){
            sum+=nums[i];
        }
        int maxSum=sum;
        //sliding the window
        for(int i=k;i<nums.size();i++){
            sum=sum-nums[i-k]+nums[i];//imp part
            maxSum=max(sum,maxSum);

        }
         return (double)maxSum / k;
    }
};