
class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        int left = 0;
        int right = nums.size() - 1;

        while (left < right) {
             if (nums[left] % 2 !=0 && nums[right] % 2 == 0) {  //1.when left is odd and right is even
                swap(nums[right], nums[left]);            //in this question remeber the test case
                left++;
                right--;
            }
            else if (nums[left] % 2 == 0) {      //2.when left is already even 
                left++;
            }
            else {            //when both left and right are odd
                //left++;
                right--;
            }
        }

        return nums;
    }
};
