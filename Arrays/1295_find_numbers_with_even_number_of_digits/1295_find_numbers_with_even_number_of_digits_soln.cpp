class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int answer=0;
        for(int i=0;i<nums.size();i++){
            int x=nums[i];
            int y=0;
        while(x>0){
            x=x/10;
            y++;
        }
        if(y%2==0){
            answer++;
        }
    }
    return answer;
    }
};