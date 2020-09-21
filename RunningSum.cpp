class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        int prevNum=0;
        for(int i=0;i<nums.size();i++){
            nums[i]=nums[i]+prevNum;
            prevNum=nums[i];
        }
        return nums;
    }
};
