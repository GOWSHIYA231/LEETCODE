// 217. Contains Duplicate

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int>setA;
        for (int i = 0; i < nums.size(); i++){
    if(setA.find(nums[i]) != setA.end()){
        return true;
    }
    else{
        setA.insert(nums[i]);
    }
        }
    return false;
    }
};
