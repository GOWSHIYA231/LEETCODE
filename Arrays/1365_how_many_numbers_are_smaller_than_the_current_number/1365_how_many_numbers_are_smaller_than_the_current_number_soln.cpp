// 1365. How Many Numbers Are Smaller Than the Current Number

class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<int>ans(nums.size());
        for(int i=0;i<nums.size();i++){
        for(int n=0;n<nums.size();n++){
           if (nums[i]>nums[n]){
          ans[i]++;
           }
          }
    }
     return ans;
    }
   };
