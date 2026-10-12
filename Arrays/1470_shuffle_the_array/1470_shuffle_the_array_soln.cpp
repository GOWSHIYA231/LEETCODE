class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int>result(nums.size());
            for(int i=0;i<n;i++){
                result[2*i]=nums[i];
                result[2*i+1]=nums[n+i];
            }
        return result;
        }
};