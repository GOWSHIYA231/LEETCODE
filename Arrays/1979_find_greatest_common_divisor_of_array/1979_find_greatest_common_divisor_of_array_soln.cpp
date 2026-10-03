// 1979. Find Greatest Common Divisor of Array

class Solution {
public:
    int findGCD(vector<int>& nums) {
        int min=nums[0];
        int max=nums[0];
        int gcd=1;
        for(int i=0;i<nums.size();i++){
            if(max<nums[i]){
                max=nums[i];
            }

            if(min>nums[i]){
            min=nums[i];
            }
        }
        for(int i=1;i<min+1;i++){
             if(max%i==0 && min%i==0){
                if(gcd<i){
                     gcd=i;
                    }
                }
            }
        
        return gcd;
    }
};
