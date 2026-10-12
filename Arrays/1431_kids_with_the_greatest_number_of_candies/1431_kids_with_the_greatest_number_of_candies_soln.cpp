class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector<bool>boolean(candies.size());
        int max=0;
for(int i=0;i<candies.size();i++){
        if (candies[i]>=max)
        {
         max=candies[i];}
        }
for(int i=0;i<candies.size();i++){
    int x;
    x=candies[i]+extraCandies;
    
    if (x>=max){
    boolean[i]= true;
    }
    else{
    boolean[i]=false;
    }
}
    return boolean;

    }
};