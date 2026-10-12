class Solution {
public:
    int maxProductDifference(vector<int>& nums) {
    int maxd;
    int flarge=INT_MIN;
    int slarge=INT_MIN;
    int fsmall=INT_MAX;
    int ssmall=INT_MAX;

    for(int i=0;i<nums.size();i++){
        
    }
    for(int i=0;i<nums.size();i++){
        if (flarge<nums[i]){
            slarge=flarge;
            flarge=nums[i];
        }
        else if(nums[i]>slarge){
            
            slarge=nums[i];
        }
    }
    for(int i=0;i<nums.size();i++){
    }
    for(int i=0;i<nums.size();i++){
        if (fsmall>nums[i]){
            ssmall=fsmall;
            fsmall=nums[i];
        }
        else if(nums[i]<ssmall){
           
            ssmall=nums[i];
        }

    }

    int ans;
    ans=flarge*slarge-fsmall*ssmall;

     return ans;
    

    }
};