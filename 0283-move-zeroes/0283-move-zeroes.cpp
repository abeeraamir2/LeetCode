class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int nonZero = 0;
        //Moving non-zero elements to the beginning
        for(int i=0 ; i<nums.size() ; i++){
            if(nums[i] != 0){
                nums[nonZero] = nums[i];
                nonZero++; 
            }
        }
        //Moving all zeroes to the end
        for(int i=nonZero ; i<nums.size() ; i++){
            nums[i] = 0;
        }
    }
};